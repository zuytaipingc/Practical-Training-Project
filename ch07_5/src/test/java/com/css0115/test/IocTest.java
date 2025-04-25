package com.css0115.test;

import com.css0115.pojo.User;
import com.css0115.service.UserService;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class IocTest {
    @Test
    public void test(){
        ApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");
        UserService userService = (UserService)context.getBean("userService");
        User user = new User();
        user.setUserName("小明");
        user.setUserCode("xiaoming");
        userService.addNewUser(user);
    }
}
