package com.css0115.service;

import com.css0115.dao.UserDao;
import com.css0115.pojo.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Service;

public class UserServiceImpl implements UserService {

    // 声明接口类型的引用，和具体实现类解耦合
    private UserDao userDao;

    // 无参构造
    public UserServiceImpl() {
    }

    // 用于为userDao属性赋值的构造方法
    public UserServiceImpl(UserDao userDao) {
        this.userDao = userDao;
    }

    // userDao 属性的setter访问器，会被Spring调用，实现设值注入
    public UserDao getUserDao() {
        return userDao;
    }

    public void setUserDao(UserDao userDao) {
        this.userDao = userDao;
    }

    public void addNewUser(User user) {
        // 调用用户DAO的方法保存用户信息
        userDao.save(user);
    }
}
