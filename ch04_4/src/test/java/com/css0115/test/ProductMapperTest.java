package com.css0115.test;

import com.css0115.dao.ProductMapper;
import com.css0115.pojo.Product;
import com.css0115.pojo.ProductCategory;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.session.SqlSession;
import org.apache.log4j.Logger;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

public class ProductMapperTest {
    private Logger logger = Logger.getLogger(ProductMapperTest.class);
    @Test
    public void getProductListTest(){
        SqlSession sqlSession = null;
        List<ProductCategory> pList = new ArrayList<ProductCategory>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            pList = sqlSession.getMapper(ProductMapper.class).getProduct(null);
        } catch (Exception e) {
            e.printStackTrace();
        }finally{
            MyBatisUtil.closeSqlSession(sqlSession);
        }

        logger.debug("getProductListTest pList.size : " + pList.size());
        for (ProductCategory productCategory : pList) {
            logger.debug("商品类别ID:"+productCategory.getId()
                    + "  商品类别名称 :"+productCategory.getName());
            for (Product product : productCategory.getProducts()) {
                logger.debug(" -- 商品名称："+product.getName()
                        +"  商品价格： "+product.getPrice()
                        +"  商品库存："+product.getStock());
            }
        }
    }
}
