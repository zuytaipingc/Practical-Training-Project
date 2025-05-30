package com.css0115.test;

import com.css0115.pojo.User;
import com.css0115.service.UserService;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;

@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration(locations = {"classpath:application-service.xml", "classpath:application-dao.xml"})
public class UserServiceTest {
    @Autowired
    private UserService userService;

    @Test
    public void findUserById() {
        User user = userService.findUserById(1);
        System.out.println(user);
    }
}
