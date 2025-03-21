package com.css0115.dao;

import com.css0115.pojo.User;
import com.css0115.pojo.UserInfo;
import org.apache.ibatis.annotations.Param;

import java.util.List;
import java.util.Map;

public interface UserMapper {
    //根据用户名称查询用户列表(模糊查询)
    //声明一个方法，要和UserMapper.xml中对应的SQL id保持一致
    public List<User> findUserListByUserName(String userName);
    List<UserInfo> getUserInfoList();
    /**
     * 查询用户列表—多参数
     * 方法一：对象入参
     */
    public List<User> findUserListByObject(User user);

    /**
     * 查询用户列表—多参数
     * 方法二：参数：Map
     */
    public List<User> findUserListByMap(Map<String, String> userMap);

    public List<User> findUserListByAnnotation(@Param("userName") String username,
                                               @Param("userRole") Integer rid);


    //查询用户列表(使用resultType做自动映射)
    List<User> getUserList1();
    List<User> getUserList2();

}


