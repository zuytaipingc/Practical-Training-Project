package com.css0115.pojo;

public class UserInfo {
    private int id;
    // user_code 字段在数据库中一般表示字符串类型，这里改为 String 类型更合适
    private String userCode;
    private String userName;

    // 无参构造方法
    public UserInfo() {
    }

    // 全参构造方法
    public UserInfo(int id, String user_code, String user_name) {
        this.id = id;
        this.userCode = user_code;
        this.userName = user_name;
    }

    // id 的 getter 方法
    public int getId() {
        return id;
    }

    // id 的 setter 方法
    public void setId(int id) {
        this.id = id;
    }

    // user_code 的 getter 方法
    public String getUser_code() {
        return userCode;
    }

    // user_code 的 setter 方法
    public void setUser_code(String user_code) {
        this.userCode = user_code;
    }

    // user_name 的 getter 方法
    public String getUser_name() {
        return userName;
    }

    // user_name 的 setter 方法
    public void setUser_name(String user_name) {
        this.userName = user_name;
    }
}
