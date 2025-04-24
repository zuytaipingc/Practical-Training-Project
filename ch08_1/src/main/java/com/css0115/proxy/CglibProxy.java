package com.css0115.proxy;

import com.css0115.aspect.MyAspect;
import org.springframework.cglib.proxy.Enhancer;
import org.springframework.cglib.proxy.MethodInterceptor;
import org.springframework.cglib.proxy.MethodProxy;

import java.lang.reflect.Method;

public class CglibProxy implements MethodInterceptor {
    // 代理方法
    public Object createProxy(Object target) {
        // 创建一个动态类对象
        Enhancer enhancer = new Enhancer();
        // 确定需要增强的类，设置其父类
        enhancer.setSuperclass(target.getClass());
        // 添加回调函数
        enhancer.setCallback(this);
        // 返回创建的代理类
        return enhancer.create();
    }

    @Override
    public Object intercept(Object proxy, Method method, Object[] args, MethodProxy methodProxy) throws Throwable {
        //创建切面对象
        MyAspect myAspect = new MyAspect();
//        前置增强
        myAspect.checkPermissions();
        Object obj = null;
//            执行被代理对象中的具体方法，并且返回执行结果
        try{
            obj = methodProxy.invokeSuper(proxy, args);
        }catch (Exception e){
            myAspect.rollback();
        }
        //后置增强操作
        myAspect.log();
        return obj;
    }
}
