package com.css0115.test;

import com.css0115.pojo.Equip;
import com.css0115.pojo.Player;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
public class GameTest {
    @Test
    public void test() {
        //加载applicationContext.xml配置文件并获取spring上下文
        ApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");
        //获取玩家对象
        Player player = (Player) context.getBean("player");
//        通过玩家获取头盔装备
        Equip armetEquip = player.getArmet();
        System.out.println("玩家头盔装备信息：" + armetEquip);
        //        通过玩家获取铠甲装备
        Equip loricaeEquip = player.getLoricae();
        System.out.println("玩家铠甲装备信息：" + loricaeEquip);
        //        通过玩家获取靴子装备
        Equip bootEquip = player.getBoot();
        System.out.println("玩家靴子装备信息：" + bootEquip);
        //        通过玩家获取指环装备
        Equip ringEquip = player.getRing();
        System.out.println("玩家指环装备信息：" + ringEquip);

    }
}
