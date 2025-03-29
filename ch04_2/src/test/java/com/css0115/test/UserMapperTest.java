package com.css0115.test;

import com.alibaba.fastjson.JSON;
import com.css0115.dao.IdCardMapper;
import com.css0115.dao.UserMapper;
import com.css0115.pojo.IdCard;
import com.css0115.pojo.User;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

public class UserMapperTest {
    @Test
    public void getUserListByRoleIdTest() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<>();
        Integer roleId = 3;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            userList = sqlSession.getMapper(UserMapper.class).getUserListByRoleId(roleId);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }

        // 使用 System.out 输出 userList 的大小
        System.out.println("getUserListByRoleIdTest userList.size : " + userList.size());
        // 使用 System.out 以 JSON 格式输出每个 User 对象的信息
        for (User user : userList) {
            System.out.println("userList =====> " + JSON.toJSONString(user));
        }
    }
    @Test
    public void getUserListByIdTest2(){
        SqlSession sqlSession = null;
        Integer id = 3;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            IdCard idCard = sqlSession.getMapper(IdCardMapper.class).findCodeById2(id);
            System.out.println(idCard);
        } catch (Exception e) {
            e.printStackTrace();
        }finally{
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
}
