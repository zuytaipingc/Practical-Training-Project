package com.css0115.test;

import com.css0115.dao.UserDao;
import com.css0115.dao.UserDaoImpl;
import com.css0115.proxy.CglibProxy;
import org.junit.Test;

public class CglibTest {
    @Test
    public void test() {
        // 创建代理对象
        CglibProxy cglibProxy = new CglibProxy();
        // 创建目标对象
        UserDao userDao = new UserDaoImpl();
        // 获取增强后的目标对象
        UserDao userDao1 = (UserDao)cglibProxy.createProxy(userDao);
        // 执行方法
        userDao1.addUser();
        System.out.println("---------------------------------------");
        userDao1.deleteUser();
    }
}
