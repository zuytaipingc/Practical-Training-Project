package com.css0115.test;

import com.css0115.dao.UserDao;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

// 测试类
public class TestAnnotationAspectj {
    @Test
    public void test() {
        String xmlPath = "applicationContext.xml";
        ApplicationContext applicationContext =
                new ClassPathXmlApplicationContext(xmlPath);
        // 1 从spring容器获得内容
        UserDao userDao = (UserDao) applicationContext.getBean("userDao");
        // 2 执行方法
        userDao.addUser();
        userDao.deleteUser();
    }
}
