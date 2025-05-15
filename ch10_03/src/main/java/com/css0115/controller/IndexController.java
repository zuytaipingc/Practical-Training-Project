package com.css0115.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import java.util.logging.Logger;

@Controller //表明当前类为控制类
public class IndexController{

       //RequestMapping注解表示使用哪个URL来映射
//       @RequestMapping(value = "/index1",method = RequestMethod.GET)
// 设置请求路径
    @GetMapping("/index1")
       public String index(){
//           logger.info("hello,SpringMVC!");
       //返回的视图名称
           return "index1";
       }



}
