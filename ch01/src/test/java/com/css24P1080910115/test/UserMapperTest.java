package com.css24P1080910115.test;


import com.alibaba.fastjson.JSON;
import com.css24P1080910115.pojo.User;
import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.apache.log4j.Logger;
import org.junit.Test;
import java.io.IOException;
import java.io.InputStream;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;

public class UserMapperTest {

    private Logger logger = Logger.getLogger(UserMapperTest.class);

    @Test
    public void test1() {
        // 创建SqlSession对象
        SqlSession sqlSession = null;
        try {
            // 获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream("mybatis-config.xml");
            // 创建SqlSessionFactory对象，此对象可以完成对配置文件的读取，代码如下
            SqlSessionFactory factory = new SqlSessionFactoryBuilder().build(is);
            int count = 0;
            // 创建SqlSession对象
            sqlSession = factory.openSession();
            // 调用mapper文件对数据进行操作，必须先把mapper文件引入到mybatis-config.xml中
            count = sqlSession.selectOne("com.css24P1080910115.dao.UserMapper.count");
            System.out.println("UserMapperTest count---> " + count);
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            // 关闭SqlSession对象
            sqlSession.close();
        }
    }

    @Test
    public void findUserByIdTest() {
        String resource = "mybatis-config.xml";
        User user = null;
        SqlSession sqlSession = null;
        try {
            //1.获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream(resource);
            //2.创建SqlSessionFactory对象，完成对配置文件的读取
            SqlSessionFactory factory = new SqlSessionFactoryBuilder().build(is);
            //3.创建SqlSession对象
            sqlSession = factory.openSession();
            //4.调用mapper文件对数据进行操作，必须先将mapper文件引入mybatis-config.xml中
            user = sqlSession.selectOne("getUserListById", 1);
            logger.debug("UserTest user---> " + user);
            logger.debug("UserTest user---> " + JSON.toJSONString(user));//利用json串解决
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            sqlSession.close();
        }
    }
    @Test
    public void findUserByNameTest() {
        String resource = "mybatis-config.xml";
        List<User> list = null;
        SqlSession sqlSession = null;
        try {
            //1.获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream(resource);
            //2.创建SqlSessionFactory对象，完成对配置文件的读取
            SqlSessionFactory factory = new SqlSessionFactoryBuilder().build(is);
            //3.创建SqlSession对象
            sqlSession = factory.openSession();
            //4.调用mapper文件对数据进行操作时，必须先将mapper文件引入mybatis-config.xml中
            list = sqlSession.selectList("getUserListByName", "张");
            for (User user : list) {
                logger.debug(user);
            }
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } finally {
            sqlSession.close();
        }
    }
    @Test
    public void addUserTest() {
        SqlSession sqlSession = null;
        int count = 0;
        String resource = "mybatis-config.xml";
        try {
            // 1.获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream(resource);
            // 2.创建SqlSessionFactory对象，完成对配置文件的读取
            SqlSessionFactory factory = new SqlSessionFactoryBuilder().build(is);
            // 3.创建SqlSession对象
            sqlSession = factory.openSession();
            // 4.SqlSession执行添加操作
            // 4.1创建User对象，并向对象中添加数据
            User user = new User();
            user.setUserCode("test001");
            user.setUserName("测试用户001");
            user.setUserPassword("1234567");
            Date birthday = new SimpleDateFormat("yyyy-MM-dd").parse("1999-12-12");
            user.setBirthday(birthday);
            user.setCreationDate(new Date());
            user.setAddress("地址测试");
            user.setGender(1);
            user.setPhone("13688783697");
            user.setUserRole(1);
            user.setCreatedBy(1);
            user.setCreationDate(new Date());
            // 4.2执行SqlSession的插入方法，返回SQL语句影响的行数
            count = sqlSession.insert("add", user);
            // 4.3通过返回结果，判断插入操作是否能执行成功
            if (count > 0) {
                logger.debug("您成功插入了" + count + "条数据！");
            } else {
                logger.debug("执行插入操作失败！！！");
            }
            // 4.4提交事务
            sqlSession.commit();
        } catch (Exception e) {
            e.printStackTrace();
            // 模拟异常，进行回滚
            sqlSession.rollback();
        } finally {
            // 5.关闭SqlSession对象
            sqlSession.close();
        }
    }
    @Test
    public void updateUserTest() {
        SqlSession sqlSession = null;
        int count = 0;
        String resource = "mybatis-config.xml";
        try {
            // 1.获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream(resource);
            // 2.创建SqlSessionFactory对象，完成对配置文件的读取
            SqlSessionFactory factory = new SqlSessionFactoryBuilder()
                    .build(is);
            // 3.创建SqlSession对象
            sqlSession = factory.openSession();
            // 4.SqlSession执行添加操作
            // 4.1创建User对象，并向对象中添加数据
            User user = new User();
            user.setId(15);
            user.setUserCode("test002");
            user.setUserName("测试用户002");
            user.setUserPassword("8888888");
            Date birthday = new SimpleDateFormat("yyyy-MM-dd").parse("1999-12-12");
            user.setBirthday(birthday);
            user.setAddress("地址测试");
            user.setGender(1);
            user.setPhone("13612341234");
            user.setUserRole(1);
            user.setModifyBy(1);
            user.setModifyDate(new Date());
            // 4.2执行SqlSession对象的更新方法，返回SQL语句影响的行数
            count = sqlSession.update("modify", user);
            // 4.3通过返回结果判断插入操作是否执行成功
            if (count > 0) {
                System.out.println("您成功修改了" + count + "条数据！");
            } else {
                System.out.println("执行修改操作失败！！！");
            }
            // 4.4提交事务
            sqlSession.commit();
        } catch (Exception e) {
            e.printStackTrace();
            // 模拟异常，进行回滚
            sqlSession.rollback();
        } finally {
            // 5.关闭SqlSession对象
            sqlSession.close();
        }
    }
    @Test
    public void deleteUserTest() {
        SqlSession sqlSession = null;
        int count = 0;
        String resource = "mybatis-config.xml";
        try {
            // 1.获取mybatis-config.xml的输入流
            InputStream is = Resources.getResourceAsStream(resource);
            // 2.创建SqlSessionFactory对象，完成对配置文件的读取
            SqlSessionFactory factory = new SqlSessionFactoryBuilder().build(is);
            // 3.创建SqlSession对象
            sqlSession = factory.openSession();
            // 4.SqlSession对象执行添加操作
            // 4.1执行SqlSession对象的更新方法，返回的是SQL语句影响的行数
            count = sqlSession.delete("deleteUserById", 15);
            // 4.2通过返回结果判断插入操作是否执行成功
            if (count > 0) {
                System.out.println("您成功删除了" + count + "条数据！");
            } else {
                System.out.println("执行删除操作失败！！！");
            }
            // 4.3提交事务
            sqlSession.commit();
        } catch (Exception e) {
            e.printStackTrace();
            // 模拟异常，进行回滚
            sqlSession.rollback();
        } finally {
            // 5.关闭SqlSession对象
            sqlSession.close();
        }
    }
}
