package com.css0115.controller;

import com.css0115.pojo.Orders;
import com.css0115.pojo.User;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
@Controller
public class OrdersController {
    /**
     * 向订单查询页面跳转
     */
    @GetMapping("/tofindOrdersWithUser")
    public String tofindOrdersWithUser( ) {
        return "orders";
    }

    /**
     * 查询订单和用户信息
     */
    @RequestMapping("/findOrdersWithUser")
    public String findOrdersWithUser(Orders orders) {
        Integer orderId = orders.getOrdersId();
        User user = orders.getUser();
        String username = user.getUsername();
        System.out.println("orderId="+orderId);
        System.out.println("username="+username);
        return "success";
    }
}
