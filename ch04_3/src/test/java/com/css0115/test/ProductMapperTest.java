package com.css0115.test;

import com.css0115.dao.ProductMapper;
import com.css0115.pojo.Product;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.session.SqlSession;
import org.apache.log4j.Logger;
import org.junit.Test;

import java.util.List;

public class ProductMapperTest {
    private static final Logger logger = Logger.getLogger(ProductMapperTest.class);

    @Test
    public void getProductListTest() {
        SqlSession sqlSession = null;
        try {
            // 1. 获取SqlSession
            sqlSession = MyBatisUtil.createSqlSession();

            // 2. 获取Mapper并执行查询（注意：这里返回的是List<Product>）
            ProductMapper productMapper = sqlSession.getMapper(ProductMapper.class);
            List<Product> products = productMapper.getProduct(1); // 传入具体的orderId

            // 3. 打印查询结果
            logger.info("查询到的商品数量: " + products.size());
            for (Product product : products) {
                logger.info(String.format(
                        "商品ID: %d | 名称: %s | 价格: %.2f | 分类: %s",
                        product.getId(),
                        product.getName(),
                        product.getPrice(),
                        product.getPc1name() // 一级分类名称
                ));
            }
        } catch (Exception e) {
            logger.error("测试失败", e);
        } finally {
            // 4. 确保关闭SqlSession
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
}
