package com.css0115.dao;

import com.css0115.pojo.Teacher;

import java.util.List;

public interface TeacherMapper {
    List<Teacher> getAllTeachers(Integer teacherId);
}
