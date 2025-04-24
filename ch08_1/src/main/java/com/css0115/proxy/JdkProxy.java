package com.css0115.proxy;

import com.css0115.aspect.MyAspect;
import com.css0115.dao.UserDao;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

public class JdkProxy implements InvocationHandler {
    // 声明目标类接口
    private UserDao userDao;

    // 创建代理方法
    public Object createProxy(UserDao userDao) {
        this.userDao = userDao;
        // 1.类加载器
        ClassLoader classLoader = JdkProxy.class.getClassLoader();
        // 2.被代理对象实现的所有接口
        Class[] clazz = userDao.getClass().getInterfaces();
        // 3.使用代理类，进行增强，返回的是代理后的对象
        return Proxy.newProxyInstance(classLoader, clazz, this);
    }


    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        //创建切面对象
        MyAspect myAspect = new MyAspect();
        //前置增强操作
        myAspect.checkPermissions();
        //执行被代理对象中的具体业务逻辑，并且传参
        Object obj = method.invoke(userDao, args);
        //后置增强操作
        myAspect.log();
        return obj;
    }
}
