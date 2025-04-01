package com.css0115.pojo;

import java.util.Date;
import java.util.List;

public class Teacher {
    private Integer id;
    private String teacherNumber;
    private String name;
    private String gender;
    private Date create_time;
    private List<Student> students;

    //生成getter和setter方法


    public Date getCreate_time() {
        return create_time;
    }

    public void setCreate_time(Date create_time) {
        this.create_time = create_time;
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getTeacherNumber() {
        return teacherNumber;
    }

    public void setTeacherNumber(String teacherNumber) {
        this.teacherNumber = teacherNumber;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public List<Student> getStudents() {
        return students;
    }

    public void setStudents(List<Student> students) {
        this.students = students;
    }
    //生成toString方法


    @Override
    public String toString() {
        return "Teacher{" +
                "id=" + id +
                ", teacherNumber='" + teacherNumber + '\'' +
                ", name='" + name + '\'' +
                ", gender='" + gender + '\'' +
                ", create_time=" + create_time +
                ", students=" + students +
                '}';
    }
}
