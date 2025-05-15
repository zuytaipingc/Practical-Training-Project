package com.css0115.controller;

import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.mvc.Controller;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class FirstController implements Controller {
        public ModelAndView handleRequest(HttpServletRequest request, HttpServletResponse response)  {
            System.out.println("hello,SpringMVC!"); // 在控制台输出日志信息
            // 创建ModelAndView
            ModelAndView mav = new ModelAndView();
            // 向ModelAndView中添加数据
            mav.addObject("msg", "这是我的第一个Spring MVC程序");
            // 设置逻辑视图名
            mav.setViewName("index");
            // 返回ModelAndView
            return mav;
        }
}
