package com.css0115.dao;

import com.css0115.pojo.User;
import org.apache.ibatis.annotations.Param;

public interface UserMapper {
    // 根据id查询User
    public User findUserById(@Param("id") Integer id);
}
