package com.css0115.dao;

import com.css0115.pojo.User;
import org.springframework.stereotype.Repository;

@Repository("userDao")
public class UserDaoImpl extends UserDao {
    public void save(User user) {
        System.out.println("要保存的用户信息为:" + user);
        // 这里并未实现完整的数据库操作，仅为说明问题
        System.out.println("保存用户信息到数据库");
    }
}
