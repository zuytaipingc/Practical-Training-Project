package com.css0115.dao;

import com.css0115.pojo.Role;
import org.apache.ibatis.annotations.Param;

import java.util.List;

public interface RoleMapper {
    Role getRoleById( Integer id);
}
