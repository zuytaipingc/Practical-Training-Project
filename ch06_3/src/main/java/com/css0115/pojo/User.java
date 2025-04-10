package com.css0115.pojo;

import javax.management.relation.Role;
import java.util.Date;

public class User {  private Integer id; // id
    private String userCode; // 用户编码
    private String userName; // 用户名称
    private String userPassword; // 用户密码
    private Date birthday; // 出生日期
    private Integer gender; // 性别
    private String phone; // 电话
    private String email; // 电子邮箱
    private String address; // 地址
    private String userDesc; // 简介
    private Integer userRole; // 用户角色
    private Integer createdBy; // 创建者
    private String imgPath; // 证件照路径
    private Date creationDate; // 创建时间
    private Integer modifyBy; // 更新者
    private Date modifyDate; // 更新时间
    private Integer age;// 年龄
    private String userRoleName; // 用户角色名称
    private Role role; //用户角色

    public void setAge(Integer age) {
        this.age = age;
    }

    public Role getRole() {
        return role;
    }

    public void setRole(Role role) {
        this.role = role;
    }

    public String getUserRoleName() {
        return userRoleName;
    }

    public void setUserRoleName(String userRoleName) {
        this.userRoleName = userRoleName;
    }


    public User() {
    }

    public User(String userCode, String userName, String userPassword,
                Integer gender, Integer userRole) {
        super();
        this.userCode = userCode;
        this.userName = userName;
        this.userPassword = userPassword;
        this.gender = gender;
        this.userRole = userRole;
    }

    public Integer getAge() {
        Date date = new Date();
        if (null != birthday) {
            Integer age = date.getYear() - birthday.getYear();
            return age;
        } else {
            return null;
        }
    }


    public User(Integer id, String userCode, String userName, String userPassword, Date birthday, Integer gender, String phone, String email, String address, String userDesc, Integer userRole, Integer createdBy, String imgPath, Date creationDate, Integer modifyBy, Date modifyDate) {
        this.id = id;
        this.userCode = userCode;
        this.userName = userName;
        this.userPassword = userPassword;
        this.birthday = birthday;
        this.gender = gender;
        this.phone = phone;
        this.email = email;
        this.address = address;
        this.userDesc = userDesc;
        this.userRole = userRole;
        this.createdBy = createdBy;
        this.imgPath = imgPath;
        this.creationDate = creationDate;
        this.modifyBy = modifyBy;
        this.modifyDate = modifyDate;
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getUserCode() {
        return userCode;
    }

    public void setUserCode(String userCode) {
        this.userCode = userCode;
    }

    public String getUserName() {
        return userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public String getUserPassword() {
        return userPassword;
    }

    public void setUserPassword(String userPassword) {
        this.userPassword = userPassword;
    }

    public Date getBirthday() {
        return birthday;
    }

    public void setBirthday(Date birthday) {
        this.birthday = birthday;
    }

    public Integer getGender() {
        return gender;
    }

    public void setGender(Integer gender) {
        this.gender = gender;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getUserDesc() {
        return userDesc;
    }

    public void setUserDesc(String userDesc) {
        this.userDesc = userDesc;
    }

    public Integer getUserRole() {
        return userRole;
    }

    public void setUserRole(Integer userRole) {
        this.userRole = userRole;
    }

    public Integer getCreatedBy() {
        return createdBy;
    }

    public void setCreatedBy(Integer createdBy) {
        this.createdBy = createdBy;
    }

    public String getImgPath() {
        return imgPath;
    }

    public void setImgPath(String imgPath) {
        this.imgPath = imgPath;
    }

    public Date getCreationDate() {
        return creationDate;
    }

    public void setCreationDate(Date creationDate) {
        this.creationDate = creationDate;
    }

    public Integer getModifyBy() {
        return modifyBy;
    }

    public void setModifyBy(Integer modifyBy) {
        this.modifyBy = modifyBy;
    }

    public Date getModifyDate() {
        return modifyDate;
    }

    public void setModifyDate(Date modifyDate) {
        this.modifyDate = modifyDate;
    }

    @Override
    public String toString() {
        return "User{" +
                "id=" + id +
                ", userCode='" + userCode + '\'' +
                ", userName='" + userName + '\'' +
                ", userPassword='" + userPassword + '\'' +
                ", birthday=" + birthday +
                ", gender=" + gender +
                ", phone='" + phone + '\'' +
                ", email='" + email + '\'' +
                ", address='" + address + '\'' +
                ", userDesc='" + userDesc + '\'' +
                ", userRole=" + userRole +
                ", createdBy=" + createdBy +
                ", imgPath='" + imgPath + '\'' +
                ", creationDate=" + creationDate +
                ", modifyBy=" + modifyBy +
                ", modifyDate=" + modifyDate +
                '}';
    }

}
