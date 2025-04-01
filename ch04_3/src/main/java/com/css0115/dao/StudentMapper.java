package com.css0115.dao;

import com.css0115.pojo.Student;

import java.util.List;

public interface StudentMapper {
    List<Student> getAllStudent(Integer teacherId);
}
