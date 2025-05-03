package com.css0115.dao;

import org.springframework.stereotype.Repository;

@Repository("userDao")//通过注解的方式生成一个bean对象，放到spring容器中
public class UserDaoImpl implements UserDao{
    @Override
    public void addUser() {
        System.out.println("新增用户...");

    }

    @Override
    public void deleteUser() {
        System.out.println("删除用户...");
    }
}
