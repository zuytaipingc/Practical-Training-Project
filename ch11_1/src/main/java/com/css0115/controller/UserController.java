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
    @RequestMapping("/toRegister")
    public String toRegister( ) {
        return "register";
    }

    /**
     * 接收用户注册信息
     */
    @RequestMapping("/registerUser")
    public String registerUser(User user) {
        String username = user.getUsername();
        Integer password = user.getPassword();
        System.out.println("username="+username);
        System.out.println("password="+password);
        return "success";
    }
    /**
     * 向用户列表页面跳转
     */
    @RequestMapping("/toUser")
    public String selectUsers( ) {
        return "user";
    }

    /**
     * 接收批量删除用户的方法
     */
    @RequestMapping("/deleteUsers")
    public String deleteUsers(Integer[] ids) {
        if(ids !=null){
            for (Integer id : ids) {
                // 使用输出语句模拟已经删除了用户
                System.out.println("删除了id为"+id+"的用户！");
            }
        } else {
            System.out.println("ids=null");
        }
        return "success";
    }


}
