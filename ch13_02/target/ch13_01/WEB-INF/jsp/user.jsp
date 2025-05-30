<%@ page language="java" import="java.util.*" pageEncoding="utf-8"%>
<html>
<head>
    <title>用户信息表</title>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="/statics/css/bootstrap.min.css">
</head>
<body class="container">
<h2>用户信息表</h2>
<table class="table table-hover">
    <thead>
    <tr>
        <th>用户编号</th>
        <th>用户姓名</th>
        <th>用户编码</th>
        <th>生日</th>
        <th>性别</th>
    </tr>
    </thead>
    <tbody>
    <tr>
        <td>${user.id}</td>
        <td>${user.userName}</td>
        <td>${user.userCode}</td>
        <td>${user.birthday}</td>
        <td>${user.gender}</td>
    </tr>
    </tbody>
</table>
</body>
</html>
