package chapter01;

import java.io.Serializable;

public class java_02object {
    public static void main(String[] args) {
        //todo 面向对象
       /* Animal a1 = new Animal();
        a1.type = "魔道";
        a1.name = "魔帝";
        a1.run();
        Animal a2 = new Animal();
        a2.type = "正道";
        a2.name = "天帝";
        a2.run();
*/


    /*    Teacher teacher = new Teacher();
        teacher.name = "zhangsan";
        teacher.teach();
        Student student = new Student();
        student.name = "lisi";
        student.study();*/
        User06 user = new User06();
        boolean rigisterResult = user.rigister();
        if (rigisterResult){
            System.out.println("注册成功");
            boolean loginResult = user.login();
            if (loginResult){
                System.out.println("登陆成功");
            }else {
                System.out.println("登录失败");
            }
        }else{
            System.out.println("注册失败");
        }
    }
}
class User06{
    String account;
    String password;
    boolean rigister(){
        System.out.println("用户注册！");
        return true;
    }
    boolean login(){
        System.out.println("用户登录");
        return false;
    }
}





/*class Teacher{
     String name;
     void teach(){
         System.out.println("老师在讲课！");
     }
}
class Student{
    String name;
    void study(){
        System.out.println("学生在上课！");
    }
}*/
/*
class Animal{
    String name;
    String type;
    void run(){
        System.out.println(type +" "+name + "飞升了");
    }

}*/





