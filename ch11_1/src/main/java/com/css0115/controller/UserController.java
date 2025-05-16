package com.css0115.controller;

import com.css0115.pojo.User;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;

import javax.servlet.http.HttpServletRequest;

@Controller
public class UserController {
    @GetMapping("/selectUser")
    public String selectUser(HttpServletRequest request) {
        //通过request对象获取前端传递过来的参数
        String id = request.getParameter("id");
        System.out.println("id" + id);
        return "success";

    }

    @RequestMapping("/selectUser2")
    public String selectUser2(Integer id) {
        System.out.println("id=" + id);
        return "success";
    }

    @RequestMapping("/selectUser3")
    public String selectUser3(@RequestParam(value = "user_id",required = false) Integer id) {
        System.out.println("id=" + id);
        return "success";
    }
    /**
     * 向用户注册页面跳转
     */
    @GetMapping("/toRegister")
    public String toRegister( ) {
        return "register";
    }

    /**
     * 接收用户注册信息
     */
    @PostMapping("/registerUser")

    public String registerUser(User user) {
//        String username = user.getUsername();
//        Integer password = user.getPassword();
//        System.out.println("username="+username);
//        System.out.println("password="+password);
        System.out.println(user.getUsername());
        System.out.println(user.getPassword());
        return "success";
    }

}
