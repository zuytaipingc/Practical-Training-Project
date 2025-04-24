package com.css0115.factorybean;

import com.css0115.dao.UserDao;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class ProxyFactoryBeanTest {
    @Test
    public void test() {
        String xmlPath = "applicationContext.xml";
        ApplicationContext applicationContext =
                new ClassPathXmlApplicationContext(xmlPath);
        // 从Spring容器获得内容
        UserDao userDao = (UserDao)
                applicationContext.getBean("userDaoProxy");
        // 执行方法
        userDao.addUser();
        userDao.deleteUser();
    }
}
