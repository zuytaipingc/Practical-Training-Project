package com.css0115.test;

import com.alibaba.fastjson.JSON;
import com.css0115.dao.UserMapper;
import com.css0115.pojo.User;
import com.css0115.pojo.UserInfo;
import com.css0115.util.MyBatisUtil;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.junit.Test;


import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class UserMapperTest {


    @Test
    public void getUserList() {
        SqlSession sqlSession = null;
        try {
            //
            sqlSession = MyBatisUtil.createSqlSession();
            List<User> datas = sqlSession.selectList("getUserList");
            System.out.println(JSON.toJSONString(datas));
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }


    }

    @Test
    public void getUserInfoList() {
        SqlSession sqlSession = null;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            List<UserInfo> datas = sqlSession.selectList("getUserInfoList");
            System.out.println(JSON.toJSONString(datas));


        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }

    @Test

    public void getUserListByUserName() {
        SqlSession sqlSession = null;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            //获取dao层对象
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            //调用相应的查询方法
            List<User> userList = userMapper.findUserListByUserName("三");
            //打印结果集
            System.out.println(JSON.toJSONString(userList));
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }


    }

    @Test
    public void testFindUserListByObject() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            User user = new User();
            user.setUserName("赵");
            user.setUserRole(3);
            //第一种方式:调用selectList方法执行查询操作
            //userList=sqlSession.selectList("cn.dsscm.dao.UserMapper.findUserListByObject",user);
            //第二种方式:调用getMapper(Mapper.class)执行DAO接口方法来实现对数据库的查询操作
            userList = sqlSession.getMapper(UserMapper.class).findUserListByObject(user);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
        System.out.println(JSON.toJSONString(userList));
    }

    @Test
    public void testFindUserListByMap() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            Map<String, String> userMap = new HashMap<String, String>();
            userMap.put("uName", "赵");
            userMap.put("uRole", "3");
//            userList = sqlSession.getMapper(UserMapper.class).findUserListByMap(userMap);
            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
            userList = userMapper.findUserListByMap(userMap);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
        System.out.println(JSON.toJSONString(userList));
    }

    @Test
    public void testFindUserListByAnnotation() {
        SqlSession sqlSession = null;
        List<User> userList = new ArrayList<User>();
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            //调用getMapper(Mapper.class)执行DAO接口方法来实现对数据库的查询操作
            userList = sqlSession.getMapper(UserMapper.class)
                    .findUserListByAnnotation("赵", 3);
//            UserMapper userMapper = sqlSession.getMapper(UserMapper.class);
//            userList = userMapper.findUserListByAnnotation(userList);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
        System.out.println(JSON.toJSONString(userList));
        }

    @Test
    public void findAllUserTest1() {
        SqlSession sqlSession = null;
        try {
            sqlSession = MyBatisUtil.createSqlSession();
            List<User> userList = sqlSession.getMapper(UserMapper.class).getUserList1();
//                    for(User user : userList){
//                        System.out.println(JSON.toJSONString(user));
//                    }

            for (int i = 0; i < userList.size(); i++){
                User user = userList.get(i);
                System.out.println(JSON.toJSONString(user));
            }

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }
    }
    @Test
    public void findAllUserTest2(){
        SqlSession sqlSession = null;
        try{
            sqlSession = MyBatisUtil.createSqlSession();
           UserMapper userMapper =  sqlSession.getMapper(UserMapper.class);
          List<User> userList = userMapper.getUserList2();
          for (User user :userList){
              System.out.println(JSON.toJSONString(user));
          }

        }finally {
            MyBatisUtil.closeSqlSession(sqlSession);
        }

    }
    }





