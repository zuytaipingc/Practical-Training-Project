package com.css0115.dao;

import com.css0115.pojo.User;
import org.apache.ibatis.annotations.Param;

import java.util.List;

public interface UserMapper {

    List<User> getUserListByRoleId(@Param("userRole")Integer roleId);
}
