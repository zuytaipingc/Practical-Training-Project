package com.css0115.test;

import com.css0115.dao.UserDao;
import com.css0115.dao.UserDaoImpl;
import com.css0115.proxy.JdkProxy;
import org.junit.Test;

public class JdkProxyTest {
    @Test
    public void test(){
        //创建一个JDK代理类对象
        JdkProxy jdkProxy = new JdkProxy();
        //被代理对象
        UserDao userDao = new UserDaoImpl();
        //通过传递被代理对象，得到代理后的对象
        UserDao userDaoProxy = (UserDao) jdkProxy.createProxy(userDao);
        //
        userDaoProxy.addUser();

        System.out.println("——————————————————————————————————————————————");


        userDaoProxy.deleteUser();
    }
}
