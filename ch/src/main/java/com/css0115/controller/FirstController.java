package com.css0115.controller;

import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.mvc.Controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class FirstController implements Controller {

    public ModelAndView handleRequest(HttpServletRequest request, HttpServletResponse response) throws Exception {
        System.out.println("hello,Spring MVC!"); // 在控制台输出日志信息
        // 创建ModelAndView
        ModelAndView mav = new ModelAndView();
        // 向ModelAndView中添加数据
        mav.addObject("msg", "Hello Spring MVC !");
        // 设置逻辑视图名
        mav.setViewName("/WEB-INF/jsp/index.jsp");
        // 返回ModelAndView
        return mav;
    }
}
