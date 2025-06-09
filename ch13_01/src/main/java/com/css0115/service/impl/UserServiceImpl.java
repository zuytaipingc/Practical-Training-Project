package com.css0115.service.impl;

import com.css0115.dao.UserMapper;
import com.css0115.pojo.User;
import com.css0115.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class UserServiceImpl implements UserService {
    @Autowired
    private UserMapper userMapper;

    public User findUserById(Integer id) {
        return userMapper.findUserById(id);
    }
}
