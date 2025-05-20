package com.css0115.controller;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;

import java.util.Date;

@Controller
public class DateController {
    /**
     * 使用自定义类型数据绑定日期数据
     */
    @RequestMapping("/customDate")
    public String CustomDate(Date date, Model model) {
        System.out.println("date=" + date);
        model.addAttribute("date", date);
        return "date";
    }
}
