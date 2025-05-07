package com.css0115.util;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import java.io.IOException;
import java.io.InputStream;

public class MyBatisUtil {

    private  static SqlSessionFactory factory;


    static {
        //静态代码块
        String resource = "mybatis-config.xml";
        try{
            //加载配置文件
            InputStream is = Resources.getResourceAsStream(resource);
            //创建工厂
            factory = new SqlSessionFactoryBuilder().build(is);
        }catch (IOException e){
            e.printStackTrace();
        }
    }

    //创建sqlSession对象
    public static SqlSession createSqlSession(){
        return factory.openSession();



    }
    public static void closeSqlSession(SqlSession sqlSession){
        //
        if (sqlSession != null){
            sqlSession.close();
        }
    }
}
