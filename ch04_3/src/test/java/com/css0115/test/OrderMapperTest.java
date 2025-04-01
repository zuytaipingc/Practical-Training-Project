package com.css0115.test;

import com.alibaba.fastjson.JSON;
import com.css0115.dao.OrderMapper;
import com.css0115.dao.TeacherMapper;
import com.css0115.pojo.Order;
import com.css0115.pojo.Product;
import com.css0115.pojo.Teacher;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.session.SqlSession;
import org.apache.log4j.Logger;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

public class OrderMapperTest {
    private Logger logger = Logger.getLogger(OrderMapperTest.class);
    @Test
    public void getOrderListTest1(){
        SqlSession sqlSession = null;
        List<Order> oList = new ArrayList<Order>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            oList = sqlSession.getMapper(OrderMapper.class).getOrder1(null);
        } catch (Exception e) {
            e.printStackTrace();
        }finally{
            MyBatisUtil.closeSqlSession(sqlSession);
        }

        logger.debug("getOrderListTest oList.size : " + oList.size());
        for (Order order : oList) {
            logger.debug("订单编号:"+order.getId()
                    + "  收货人： "+order.getUserName()
                    + "  收货地址 :"+order.getUserAddress());
            for (Product product : order.getProducts()) {
                logger.debug(" -- 商品名称："+product.getName()
                        +"  商品价格： "+product.getPrice());
            }
        }
    }
    @Test
    public void getAllTeachersTest() {
        SqlSession sqlSession = null;
        try {
            // 获取 SqlSession
            sqlSession = MyBatisUtil.createSqlSession();

            // 获取 TeacherMapper 实例
            TeacherMapper teacherMapper = sqlSession.getMapper(TeacherMapper.class);

            // 调用 getAllTeachers 方法，传入 teacherId
            List<Teacher> teachers = teacherMapper.getAllTeachers(1);

            // 打印查询结果
            System.out.println(JSON.toJSONString(teachers));

        } finally {
            // 关闭 SqlSession
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
}
