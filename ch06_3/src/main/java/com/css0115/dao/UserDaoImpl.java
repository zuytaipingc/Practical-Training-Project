package com.css0115.dao;

import com.css0115.pojo.User;

public class UserDaoImpl implements UserDao{
//    具体的实现，将用户信息保存到数据库
    public void save(User user){
        System.out.println("要保存的用户信息为:"+ user);
        System.out.println("保存用户信息到数据库成功！！！");
    }
}
