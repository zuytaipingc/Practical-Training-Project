package com.css0115.pojo;

public class IdCard {
    private Integer id; // id
    private Integer uid; // 用户id
    private String code;// 身份证号码

    private User user;// 一对一

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public Integer getUid() {
        return uid;
    }

    public void setUid(Integer uid) {
        this.uid = uid;
    }

    public String getCode() {
        return code;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public User getUser() {
        return user;
    }

    public void setUser(User user) {
        this.user = user;
    }

    @Override
    public String toString() {
        return "IdCard{" +
                "id=" + id +
                ", uid=" + uid +
                ", code='" + code + '\'' +
                ", user=" + user +
                '}';
    }
}
