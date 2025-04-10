package com.css0115.service;

import com.css0115.dao.UserDao;
import com.css0115.pojo.User;

public class UserServiceImpl implements UserService {
    private UserDao userDao;

    public UserDao getUserDao() {
        return userDao;
    }

    public void setUserDao(UserDao userDao) {
        this.userDao = userDao;
    }

    public  void addNewUser(User user){
        System.out.println("我要开始调用DAO层的对象保存用户信息了！！！");
        userDao.save(user);

    }

}
