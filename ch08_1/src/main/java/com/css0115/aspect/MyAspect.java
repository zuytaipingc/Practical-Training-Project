package com.css0115.aspect;

public class MyAspect {
    public void checkPermissions(){
        System.out.println("校验权限");
    }
    public void rollback(){
        System.out.println("执行回滚");
    }
    public void log(){
        System.out.println("记录日志");
    }
}
