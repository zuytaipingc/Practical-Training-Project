package com.css0115.test;

import com.alibaba.fastjson.JSON;
import com.css0115.dao.UserMapper;
import com.css0115.pojo.User;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.ognl.JavaSource;
import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

//import static com.sun.webkit.EventLoop.logger;

public class UserMapperTest {
    @Test
    public void testGetUserList(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
//            String userName = "张";
            String userName = null;
//            Integer roleId = 3;
            Integer roleId = null;
            List<User> userList =  userMapper.getUserList(userName,roleId);
            System.out.println(JSON.toJSONString(userList));
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
            }
    }

    @Test
    public void testGetUserList2(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            String userName = "张";
//            String userName = null;
            Integer roleId = 3;
//            Integer roleId = null;
            List<User> userList =  userMapper.getUserList2(userName,roleId);
            System.out.println(JSON.toJSONString(userList));
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
    @Test
    public void testGetUserList3(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            String userName = "张";
//            String userName = null;
            Integer roleId = 3;
//            Integer roleId = null;
            List<User> userList =  userMapper.getUserList3(userName,roleId);
            System.out.println(JSON.toJSONString(userList));
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
    @Test
    public void testGetUserList4(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            String userName = "张";
//            String userName = null;
            Integer roleId = 3;
//            Integer roleId = null;
            List<User> userList =  userMapper.getUserList4(userName,roleId);
            System.out.println(JSON.toJSONString(userList));
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
        @Test
    public  void testgetUserList5(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            List<User> userList = userMapper.getUserList5("张",3);
            System.out.println(JSON.toJSONString(userList));
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
        }

        @Test
    public void testgetUserListChoose(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            String userName = "";
            Integer roleId = null;
            String userCode = "";
            Date creationDate = new SimpleDateFormat("yyyy-MM-dd").parse("2019-10-01");
            List<User> userList = userMapper.getUserListChoose(userName,roleId,userCode,creationDate);
        } catch (ParseException e) {
            throw new RuntimeException(e);
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
        }

        @Test
    public void testmodifyUser(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            User user = new User();
            user.setId(16);
            user.setUserCode("test");
            user.setUserName("测试用户修改");
            user.setUserPassword("123456");
            user.setAddress("地址测试修改");
            user.setModifyBy(1);
            //修改日期
            user.setModifyDate(new Date());

            int count = userMapper.modify(user);
            if( count > 0){
                System.out.println("修改用户信息成功");
            }else {
                System.out.println("修改用户信息失败");
            }
        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);

        }
        }

    @Test
    public void testModifyUser2() {
        SqlSession sqlSession = null;
        int count = 0;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            User user = new User();
            user.setId(13);
            user.setUserName("测试用户修改2");
            user.setAddress("地址测试修改");
            user.setModifyBy(1);
            user.setModifyDate(new Date());
            sqlSession = MyBatisUtil.createSqlSession();
            count = sqlSession.getMapper(UserMapper.class).modify2(user);
            //手动提交事务
            sqlSession.commit();
            if(count==1){
                System.out.println("修改用户成功！");
            }else{
                System.out.println("修改用户失败！");
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }

    @Test
    public void testModifyUser3() {
        SqlSession sqlSession = null;
        int count = 0;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            User user = new User();
            user.setId(10);
            user.setUserName("测试用户修改2");
            user.setAddress("地址测试修改");
            user.setModifyBy(1);
            user.setModifyDate(new Date());
            sqlSession = MyBatisUtil.createSqlSession();
            count = sqlSession.getMapper(UserMapper.class).modify3(user);
            if(count==1){
                System.out.println("修改用户成功！");
            }else{
                System.out.println("修改用户失败！");
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }

    @Test
    public void testGetUserByArray() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            Integer[] roleIds = {2,3};
            userList = sqlSession.getMapper(UserMapper.class).getUserByArray(roleIds);
            for (User user : userList) {
                System.out.println(JSON.toJSONString(user));
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
    @Test
    public void testGetUserByList() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            List<Integer> roleList = new ArrayList<Integer>();
            roleList.add(2);
            roleList.add(3);
            userList = sqlSession.getMapper(UserMapper.class).getUserByList(roleList);
            for (User user : userList) {
                System.out.println(JSON.toJSONString(user));
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }

    @Test
    public void testGetUserByMap() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            Map<String, Object> conditionMap = new HashMap<String,Object>();
            List<Integer> roleList = new ArrayList<Integer>();
            roleList.add(2);
            roleList.add(3);
            conditionMap.put("gender", 1);
            conditionMap.put("roleIds",roleList);
            userList = sqlSession.getMapper(UserMapper.class).getUserByMap(conditionMap);
            for (User user : userList) {
                System.out.println(JSON.toJSONString(user));
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
    @Test
    public void testFindUserByName() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            User user = new User();
            user.setUserName("张");
            userList = sqlSession.getMapper(UserMapper.class).findUserByName(user);
            for (User u : userList) {
                System.out.println(JSON.toJSONString(u));
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }





}
