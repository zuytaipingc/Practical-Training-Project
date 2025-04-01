package com.css0115.dao;

import com.css0115.pojo.Order;
import org.apache.ibatis.annotations.Param;

import java.util.List;

public interface OrderMapper {
    // 根据订单ID获取商品列表
    public List<Order> getOrder1(@Param("id")Integer id);
}
