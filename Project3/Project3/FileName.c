#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
////struct S
////{
////	int a;
////	char c;
////	char arr[20];
////	double d;                                
////};
////struct T
////{
////	char ch[10];
////	struct S s;
////	char *pc;
////	
////};
////int main(){
////	char arr[] = "hello bit\n";
////	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
////	printf("%s\n", t.ch);//hehe
////	printf("%s\n", t.s.arr);//hello world
////	printf("%lf\n", t.s.d);//3.14
////	printf("%s\n", t.pc);//hello bit
////	return 0;
////}
////typedef struct Stu
////{
////	//成员变量
////	char name[20];
////	short age;
////	char tele[12];
////	char sex[5];
////}Stu;
////void Print1(Stu tmp)
////{
////	printf("name:%s\n", tmp.name);
////	printf("age:%d\n", tmp.age);
////	printf("tele:%s\n", tmp.tele);
////	printf("sex:%s\n", tmp.sex);
////}
////Print2(Stu* ps)
////{
////	printf("name:%s\n", ps->name);
////	printf("age:%d\n", ps->age);
////	printf("tele:%s\n", ps->tele);
////	printf("sex:%s\n", ps->sex);
////}
////int main() {
////	Stu s = { "李四",40,"12345678978","男" };
////	//打印一个结构体数据 需要封装一个函数
////	Print1(s);
////	Print2(&s);
////	return 0;
////}
//
//
////int main() {
////    printf("欢迎来到我们的网站！\n");
////    printf("请点击以下链接获取免费的游戏礼包：\n");
////    printf("www.freegifts.com\n");
////    printf("祝您游戏愉快！\n");
////
////    return 0;
//// 
////}
////#include<stdio.h>
////#define M(x,y) x-y
////void main()
////{
////	int a=4, b = 3, c = 5;
////	printf("%d", a * M(b, c));
//// 
////main() {
////	int i, j;
////	char c = '*';
////	for ( i = 0; i <= 3 ; i++)
////	{
////		for (j=1; j <= 7; j++)
////		{
////			j += 1;
////		}
////	}
////	printf("%c\n", c);
////}
//
////void del(char* s, char c);
////int main() {
////	int i = 0;
////	int j[10];
////	scanf("%d", & j[10]);
////	printf("%d", j[i]);
////}
////void del(char* s, char c)
////{
////
////}
////int main()
////{
////	int x = 10, y = 20, z = 30;
////	if (x > y)
////		z = x;
////	x = y;
////	y = z;
////	printf("%d,%d,%d\n", x, y, z);
//
////int main() {
////	int x = 1, y = 2, z = 3;
////	y += x += z;
////	printf("%d", x<y?x++:y++);
////}
////int main()
////{
////	int x = 1;
////	printf("%d", ++x);
////}
//
////void main()
////{
////	int i,j,x = 0;
////	for (i = 0; i < 2; i++) {
////		x++;
////		for (j = 0; j <= 3; j++) {
////			if (j % 2) continue;
////			x++;
////		}
////		x++;
////	}
////	printf("x=%d", x);
////}
////int sum(int* p, int n)
////{
////	int s = 0, j;
////
////for (j = 0; j < n; j++)
////s += p[j];
////return s;
////}
////void main()
////{
////int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, t;
////t = sum(a + 2,5);
////printf("%d",t);
////}
////void swap(int*, int); 
////void main()
////{
////	int a = 3, b = 5;
////	swap(&a, b);
////	printf("a=%d,b=%d", a, b);
////}
////	void swap(int* x, int y) {
////		int temp;
////		temp = *x;
////		*x = y; 
////		y = temp;
////	}
//
////int adds(int x, int y);
////void main()
////{
//
//	/*int a = 5, b = -1, c;
//	c = adds(a, b);
//	printf("%d,", c);
//	c = adds(a, b);
//	printf("%d\n", c);
//}
//int adds(int x, int y)
//{
//	static int m = 0, n = 3;
//	n *= ++m;
//	m = n % x + y++;
//	return(m);
//}*/
//
////void main()
////{
////	int i, j=0;
////	for (i = 0; i < 10; i++)
////	{
////		if (j % 3!=0)continue;
////		printf("%d\t", j);
////	}
////}
////void inverse(int*, int);
////void main()
////{
////	int a[10], i;
////	for (i = 0; i < 10; i++)
////		scanf("%d", &a[i]);
////	inverse(a, 10);
////	for (i = 0; i < 10; i++)
////		printf("%d\t", a[i]);
////	printf("\n");
////}
////void inverse(int* p, int n)
////{
////	int* q, t;
////	for (q=p+n-1;p<q;p++,q--)
////	{
////		t = *p;
////		*p = *q;
////		*q = t;
////	}
////}
//
////void main()
////{
////	struct student
////	{
////		int id;
////		char name[20];
////		float score;
////	};
////	struct student stu[4], * p;
////	int i, temp = 0;
////	for (p = stu; p < stu + 4; p++)
////		scanf("%d %s %f", &p->id ,&p->name,& p->score);
////		for (i = 1; i < 4; i++)
////			if (stu[i].score>stu[temp].score)
////				temp = i;
////	p = stu+temp;//&stu[temp]
////	printf("\nThe max - num score : \n");
////	printf("Id:%d\nName:%s\nScore:%4.1f\n", p->id, p->name, p->score);
////}
//
////void main() {
////	int i, j, k;
////	for ( i = 0; i <= 5; i++)
////	{
////		for (j = 1; j <= 4 - i; j++)
////			putchar(' ');
////		for ( k = 1; k < 2*i-1; k++)
////		
////			putchar('*');
////		putchar('\n');
////	}
////}
////
//
//
//
//
//
//
//
//
//
//
//
//
////倒三角
////int main()
////{
////	int i, j;
////	int n;
////	scanf("%d", &n);
////	for (i = n; i >= 1; i++)
////	{
////		for (j = 1; j <= (n - i); j++)
////			printf(" ");
////		for (j = 1; j <= (2 * (i - 1) + 1); j++)
////			printf("*");
////		printf("\n");
////	}
////	return 0;
////}
//
//
////正三角
////void main() {
////	int i, j, k;
////	for (i = 1; i <= 4; i++) {//控制打印输出4行星星
////		for (k = 1; k <= 4 - i; k++) {
////			printf(" ");//控制打印输出每一行第一个星星前的空格个数
////		}
////		for (j = 1; j <= 2 * i - 1; j++) {//控制打印输出每行的星星个数
////			printf("*");
////		}
////		printf("\n");//打印完一行后都需要换行
////	}
////}
//
//
////void main() {
////	int a[10], i, j, t;
////	printf("请输入10个整数");
////	for ( i = 0; i < 10; i++)
////	{
////		scanf("%d\n", &a[i]);
////	}
////	for ( i = 0; i < 9; i++)
////	
////		for (j = 0; j < 9 - i; j++) 
////			if (a[j]>a[j+1])
////			{
////				t = a[j];
////				a[j] = a[j + 1];
////				a[j + 1] = t;
////			}
////			printf("排序输出结果:\n");
////		
////	
////	
////	for ( i = 0; i < 10; i++)
////	{
////		printf("%d\t", a[i]);
////	}
////}
//
//
////int main() {
////    int numbers[10];
////    int i, j, temp;
////
////    // 从键盘输入十个整数
////    printf("请输入十个整数：\n");
////    for (i = 0; i < 10; i++) {
////        scanf("%d", &numbers[i]);
////    }
////
////    // 使用冒泡排序算法进行升序排列
////    for (i = 0; i < 9; i++) {
////        for (j = 0; j < 9 - i; j++) {
////            if (numbers[j] > numbers[j + 1]) {
////                temp = numbers[j];
////                numbers[j] = numbers[j + 1];
////                numbers[j + 1] = temp;
////            }
////        }
////    }
////
////    // 输出升序排列的结果
////    printf("升序排列的结果为：\n");
////    for (i = 0; i < 10; i++) {
////        printf("%d ", numbers[i]);
////    }
////    printf("\n");
////
////    return 0;
////}
////void del(char*, char);
////void main()
////{
////	char str[100], ch;
////	printf("请输入字符串：\n");
////	gets(str);
////	printf("请输入要删除的字符：\n");
////	scanf("%c", &ch);
////	del(str, ch);
////	printf("\n删除后的字符串：\n");
////	puts(str);
////}
////void del(char* s, char c)
////{
////	char* p = s;
////	while (*s)
////	{
////		if (*s != c)
////		{
////			*p++ = *s;
////		}
////		s++;
////	}
////	*p = '\0';
////}
////void main()
////{
////	char s[10];
////	s = "student";
////	printf("%c"s[]);
////}
////int main()
////{
////	int i = 10;
////	i = i-- - --i * (i = -3) * i++ + ++i;
////	printf("i = %d\n", i);
////	return 0;
////}
////int fun()
////{
////	static int count = 1;
////	return ++count;
////}
////int main()
////{
////	int answer;
////	answer = fun() - fun() * fun();
////	printf("%d\n", answer);//输出多少？
////	return 0;
////}
//
////int main()
////{
////	int i = 1;
////	char arr[] = "abcdser";
////	printf("%p\n", arr[i]);
////}
////struct idc
////{
////	char id;
////	int name;
////}n1;
////struct Stu        //类型声明
////{
////	char name[15];//名字
////	int age;      //年龄
////};
////struct Stu s = { "zhangsan", 20 };//初始化
////
////
////struct Point {
////	char a;
////};
////struct Node
////{
////	int data;
////	struct Point p;
////	struct Node* next;
////}n1 = { 10, {4}, NULL }; //结构体嵌套初始化
////struct Node n2 = { 20, {5}, NULL };//结构体嵌套初始化
////struct S s;
////int main()
////{
////    int a = 0;
////    int b = 2;
////    if (a == 1)
////    {
////        if (b == 2)
////        {
////            printf("hehe\n");
////        }
////    }
////    else
////    {
////        printf("haha\n");
////    }
////    return 0;
////}
////int main()
////{
////	int a = 0;
////	int b = 2;
////	if (a == 1)
////		if (b == 2)
////			printf("hehe\n");
////		else
////			printf("haha\n");
////	return 0;
////}
////int main()
////{
////    int n = 1;
////   
////    int m = 2;
////    switch (n)
////    {
////    case 1:
////        m++;
////    case 2:
////        n++;
////    case 3:
////        switch (n)
////        {//switch允许嵌套使用
////        case 1:
////            n++;
////        case 2:
////            m++;
////            n++;
////            break;
////        }
////    case 4:
////        m++;
////        break;
////    default:
////        break;
////    }
////    printf("m = %d, n = %d\n", m, n);
////    return 0;
////}
////int main()
////{
////	int i = 1;
////	while (i <= 10)
////	{
////		if (i == 5)
////			continue;
////		printf("%d ", i);
////		i = i + 1;
////	}
////	return 0;
////int main()
////{
////	int i = 1;
////	while (i <= 10)
////	{
////		if (i == 5)
////			break;
////		printf("%d ", i);
////		i = i + 1;
////	}
////	return 0;
////}
////int main()
////{
////	int ch = 0;
////	while ((ch = getchar()) != EOF)
////		putchar(ch);
////	return 0;
////}
////int main()
////{
////	char ch = '\0';
////	while ((ch = getchar()) != EOF)
////	{
////		if (ch < '0' || ch > '9')
////			continue;
////		putchar(ch);
////	}
////	return 0;
////}
////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main() {
////	int i = 0, j = 0, num[20], base, n = 0;
////	char ch[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
////		'A', 'B', 'C', 'D', 'E', 'F' };
////	printf("请输入一个数:");
////	scanf("%d", &n);
////	printf("请输入要转换的进制数:");
////	scanf("%d", &base);
////	do {
////		//255 转16 
////		// (1) 255%16=15 15放入num[0]  255/15=15  
////		//(2) 15%16=15   15放入num[1]  15/16=0 n==0 退出 15正是char数组元素 F 的下标
////
////		num[i] = n % base;
////		//n%base得出来的余数最大不会大于base 
////		n = n / base;
////		i++;
////
////	} while (n != 0);
////
////	//最先的余数是在最后面打印
////
////	//--i 因为在里面多加了一次
////	for (j = --i; j >= 0; j--) {
////		printf("%c", ch[num[j]]);
////	}
////	return 0;​​
//
//
////main() {
////	int i, j, k, t = 0;
////	for (i = 1; i <= 9; i++) {
////		t = 0;
////		//第一次是8个空格
////		while (9 - i > t) {//打印空格
////			printf("  ");
////			t++;
////		}
////		for (j = 1; j <= i; j++)//打印左半边三角形
////			printf("% d", j);
////		for (k = i - 1; k > 0; k--)//打印右半边三角形
////			printf("% d", k);
////		printf("\n");
////	}
////
////	return 0;
////}
////int main() {
////	int year, days, month = 0;
////	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////	printf("请输入年,天数:");
////
////	scanf("%d%d", &year, &days);
////
////	int t = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
////	//判断闰年
////
////	while (days > 0 && days < 365 + t) {//<=0跳出
////		days -= a[month];//总天数减去每个月份的天数
////		month++;
////	}
////	if (days < 0) {//若是days<0了 月份-1 在天数上加回来 days 加这个月的天数
////		//2022  50天  50天-1月=19天  19-28天 =-9  month=2  month-1=1  
////		//1是a[1] days=-9  -9+28 =19  也就是2月19日
////		month--;
////		days += a[month];
////		//最后一次的时候天数不够减 days为负数了要加回来，变为每月的多少号
////	}
////	//month也是代表数组下标 0开始
////	printf("%d-%d-%d \n", year, month + 1, days);
////	return 0;
////}
//
////int main() {
////    int year, day;
////    int month_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////
////    printf("请输入年份：");
////    scanf("%d", &year);
////
////    printf("请输入天数：");
////    scanf("%d", &day);
////
////    // 判断是否为闰年，闰年2月份有29天
////    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
////        month_days[1] = 29;
////    }
////
////    int month = 0;
////    while (day > month_days[month]) {
////        day -= month_days[month];
////        month++;
////    }
////
////    printf("日期为：%d年%d月%d日\n", year, month + 1, day);
////
////    return 0;
////}
////int main()
////{
////    int age, y0, y1, m0, m1, d0, d1;
////    printf("输入生日日期（年,月,日） ");
////    /***********SPACE***********/
////    scanf("%d%d%d", &y0, &m0, &d0);
////    printf("输入当前日期（年,月,日)");
////    scanf("%d%d%d", &y1, &m1, &d1);
////    age = y1 - y0;
////    /***********SPACE***********/
////    if (m0 > m1)age--;//生日月份大于当前月份 2000 12 31     2022 6 2   
////    /***********SPACE***********/
////    if ((m0 == m1) && (d0 > d1))age--; //两个月份相等的情况下 生日日期大于当前日期 age--
////    printf("age=%3d", age);
////    return 0;
////} 
//	//功能： 算式： (空)2 * 7(空) = 3848 中缺少一个十位数和一个个位数。
//	//编程求出使该算式成立时的这两个数， 并输出正确的算式。
//
////int main() {
////    int m, n;
////    for (m = 1; m <= 9; m++) {
////        for (n = 0; n <= 9; n++) {
////            if ((10 * m + 2) * (7 * 10 + n) == 3848) {
////                printf("%d*%d", 10 * m + 2, 70 + n);
////            }
////        }
////    }
////    return 0;
////}
////功能： 编程求任意给两个日期（年 月 日）相差的天数。
////void date(int startyear, int startmonth, int startday, int endyear,
////	int endmonth, int endday) {
////	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////
////	int flagmonth_sta, flagmonth_end, i, j, total = 0;
////
////	for (i = startyear; i <= endyear; i++) {
////		if (i == startyear)
////			//开始年的月,按从开始的月计算
////			flagmonth_sta = startmonth;
////		else flagmonth_sta = 1;//否则在1月开始
////
////		if (i == endyear)
////			//若是末尾年月份在末尾月结束
////			flagmonth_end = endmonth;
////		else flagmonth_end = 12;//否则就在12结束
////
////		//累加这一年月份的日子
////		for (j = flagmonth_sta; j <= flagmonth_end; j++) {
////
////			//判断是不是闰年
////			if (flagmonth_end > 2 && (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)) {
////				arr[2] = 29;
////			}
////			else arr[2] = 28;
////
////			int start_day, end_day;
////			if (startmonth == j && i == startyear)
////				//是起始年的起始月
////				start_day = startday;
////			else start_day = 0;//否则天数是0
////
////			if (endmonth == j && i == endyear)
////				//终止年的终止月 设为传过来得天数
////				end_day = endday;
////			else end_day = arr[j];//否则是数组的天数
////
////			//；累加当前月份的日子
////			for (int n = start_day; n <= end_day; n++)
////			{
////				total++;
////			}
////
////		}
////
////	}
////	printf("%d", total - 1);
////
////}
////
////int main() {
////	int startyear, startmonth, startday;
////	int endyear, endmonth, endday;
////	printf("请输入开始的年月日:");
////	scanf("%d%d%d", &startyear, &startmonth, &startday);
////	printf("请输入终止的年月日:");
////	scanf("%d%d%d", &endyear, &endmonth, &endday);
////	date(startyear, startmonth, startday, endyear, endmonth, endday);
////
////
////	return 0;
////}
////
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//// 
//	//写一个函数把一个数的二进制奇数位和偶数位交换
////void Print(int num) {
////    int arr[32], count = 0;
////
////    while (num) {
////        arr[count++] = num % 2;
////        num /= 2;
////    }
////    for (int i = count - 1; i >= 0; i--)
////        printf("%d ", arr[i]);
////    printf("\n");
////}
////int  Swap(int num) {
////    return ((num & 0xaaaaaaaa) >> 1) + ((num & 0x55555555) << 1);
////}
////int main() {
////    int num = 0;
////    printf("请输入一个数:");
////    scanf("%d", &num);
////    printf("初始二进制位:\n");
////    Print(num);
////    int result = Swap(num);
////    printf("Swap后十进制 = %d \n Swap后二进制位:\n", result);
////    Print(result);
////
////    return 0;
////}
////
//
////    //题目要求找出数组中的两个单身狗，即数组中只有x个元素是单独不一样的，
////    //别的都是有相同的兄弟
////int main() {
////    int arr[10] = { 1, 2, 5, 4, 9, 0, 1, 2, 3, 4 };
////    int flag;
////    //10个数循环比较10次 
////    for (int i = 0; i < 10; i++) {
////        flag = 0;
////        //每个擂主要和全部的人比较，包括自己
////        for (int j = 0; j < 10; j++) {
////            if (arr[i] == arr[j]) {
////                flag++;//会和自己本身比较一下,所以找到单身狗flag=1 不是的大于1
////            }
////        }
////        if (flag <= 1)printf("单身狗= %d\n", arr[i]);
////    }
////    return 0;
////}
////
////
////
//	//数字字符串转换为整数
////int isNumber(char a[]) {
////    //-123
////    int i = 0, flag = 0;
////    if (a[0] == '-') {
////        //判断是不是数字字符
////        for (i = 1; a[i] != '\0'; i++) {
////            if (!(a[i] >= '0' && a[i] <= '9'))
////                break;
////        }
////        if (a[i] == '\0')
////            flag = -1;
////        //若是判断是负数的数字字符返回-1
////    }
////    else {//不是负数数字字符的情况
////        for (i = 0; a[i] != '\0'; i++) {
////            if (!(a[i] >= '0' && a[i] <= '9'))
////                break;
////        }
////        if (a[i] == '\0')
////            flag = 1;//若是正数数字字符满足条件返回1
////
////    }
////    return flag;//0的情况是不是合法字符
////
////}
////void str_num(char a[]) {
////    int i = 0, num = 0, flag = 1;//整数的符号
////    int start = -1;//判断字符串转换的起始位置
////    //判断是不是数字字符串
////    int flag11 = isNumber(a);
////    if (flag11 == 0) {
////        printf("不是合法数字字符\n");
////        return;
////    }
////    else if (flag11 == -1) {//负数数字字符串转换为整数
////        flag = -1;
////        start = 1;
////    }
////    else if (flag11 == 1) {
////        flag = 1;
////        start = 0;
////    }
////    //转化
////    for (i = start; a[i] != '\0'; i++) {
////        num = num * 10 + a[i] - '0';
////    }
////    num *= flag;
////    printf("转换为的整数字符是:%d\n", num);
////
////}
////int main() {
////    char a[10];
////    printf("请输入一个字符串:");
////    gets(a);
////    str_num(a);
////    return 0;
////}
////
//	//升序的数组插入一个数，还保持升序
////void insert(int a[], int n, int sz) {
////    int i = 0;
////    for (i = sz - 2; i >= 0; i--) {
////        if (n < a[i]) {//n小于数组的元素，该元素向后挪
////            a[i + 1] = a[i];
////        }
////        else {//否则就插入
////            a[i + 1] = n;
////            break;
////        }
////    }
//	//插入的数比数组元素都小的情况
//   /* if (i == -1)
//		a[0] = n;
//
//
//
//}
//int main() {
//	int a[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 12,};
//	int sz = sizeof(a) / sizeof(a[0]);
//	int n = 0;
//	printf("%d\n",sz);
//	printf("请输入一个数字:");
//	scanf("%d", &n);
//	insert(a, n, sz);
//	for (int i = 0; i < 11; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//*/
////输入年 月 判断该月多少天
//
////int main() {
////    int y = 0;
////    int m = 0;//天数固定设计一个数组
////    int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////    while (scanf("%d %d", &y, &m) != EOF) {//ctrl+Z退出
////        int day = arr[m];//不要对arr[m]直接修改会改动数组内容
////        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
////            if (m == 2)
////                day += 1;
////        }
////        printf("%d\n", day);
////    }
////    return 0;
////}
//
////int main() {
////    int a = 0;
////    int b = 0;
////    int c = 0;
////    int d = 0;
////    int e = 0;
////    for (a = 0; a <= 5; a++) {
////        for (b = 0; b <= 5; b++) {
////            for (c = 0; c <= 5; c++) {
////                for (d = 0; d <= 5; d++) {
////                    for (e = 0; e <= 5; e++) {
////                        //他们每个人说的对一半，逻辑值相加才等于1
////                        if ((b == 2) + (a == 3) == 1
////                            && (b == 2) + (e == 4) == 1
////                            && (c == 1) + (d == 2) == 1
////                            && (c == 5) + (d == 3) == 1
////                            && (e == 4) + (a == 1) == 1) {
////                            if (a * b * c * d * e == 120)//并且5个人的排名不能相同
////                                printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
////
////                        }
////                    }
////                }
////            }
////        }
////    }
////    return 0;
////}
////int main() {
////    char murder;
////    for (murder = 'A'; murder <= 'D'; murder++) {
////        //遍历这四个人，且要满足这4个条件
////        if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')
////            == 3) {//这四个条件里面3个真的一个假的，所以相加后的逻辑值 ==3才行
////            printf("murder是  %c\n", murder);
////        }
////    }
////    return 0;
////}
//	//法1 
////void reverse(int a[], int sz, int temp1[], int temp2[]) {
////    int j_num = 0, o_num = 0, i;
////    for (i = 0; i < sz; i++) {
////        if (a[i] % 2 == 0) {//存到偶数暂存数组
////            temp1[o_num++] = a[i];
////        }
////        else if (a[i] % 2 != 0) {
////            temp2[j_num++] = a[i];
////        }
////    }
////    for (i = 0; i < j_num; i++) {//所有奇数放回去
////        a[i] = temp2[i];
////    }
////    for (int j = 0; j < o_num; j++, i++) {//所有偶数放回去
////        a[i] = temp1[j];//j来控制偶数数组下标
////    }
////
////}
////int main() {
////    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////    int temp1[10];//暂存奇数偶数的数组
////    int temp2[10];
////    int sz = sizeof(a) / sizeof(a[0]);
////    reverse(a, sz, temp1, temp2);
////    for (int i = 0; i < sz; i++) {
////        printf("%d ", a[i]);
////    }
////    return 0;
////}
////
//
////法2
////void reverse(int left[], int right[]) {
////	//left指向起始  right指向数组末尾
////	while (left < right) {
////		while ((left < right) && *left % 2 != 0) {
////			left++;//如果*left是奇数就循环接着向后指,直到指向偶数就退出
////		}
////		//（left<right）是避免全是奇数的情况，指导最后一个元素，在向后指就越界了
////		while ((right > left) && *right % 2 == 0) {
////			right--;//如果*right是偶数就循环接着向前指,直到指向奇数就退出
////
////		}
////
////		//左边的偶数和右边的奇数交换
////		if (left < right) {
////			int temp = *left;
////			*left = *right;
////			*right = temp;
////		}
////	}
////}
////int main() {
////	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////
////	int sz = sizeof(a) / sizeof(a[0]);
////	reverse(a, a + sz - 1);
////	for (int i = 0; i < sz; i++) {
////		printf("%d ", a[i]);
////	}
////	return 0;
////}
//
////int main() {
////    int total = 0, empty = 0, money;
////    printf("请输入钱数:");
////    scanf("%d", &money);
////    total = money;//初始瓶子数
////    empty = money;//空瓶数
////    while (empty >= 2) {//大于等于2才能换
////        total += empty / 2;//两瓶换一瓶换的累加到总和上去
////        empty = empty / 2 + empty % 2;//更新空瓶数量有奇数瓶的要加上
////    }
////    printf("能喝 %d 瓶\n", total);
////    return 0;
////}
//
//
//
//
//
//
//
////int main() {
////    int total=0, empty=0, money;
////    printf("请输入一个钱数:");
////    scanf("%d", &money);
////    total = money;//初始的瓶子数量等于钱数
////    empty = money;//空瓶子数等于钱数
////    while (empty >= 2) {
////        total += empty / 2;
////        empty = empty / 2 + empty % 2;
////
////    }
////    printf("%d\n", total);
////    return 0;
////}
////insert(int arr[], int sz, int n) {
////    int i=0;
////    for (i = sz - 2; i >= 0; i--)
////    {
////        if (n < arr[i]) {
////            arr[i + 1] = arr[i];
////        }
////        else
////        {
////            arr[i + 1] = n;
////            break;
////        }
////    }
////    if (i == -1)
////    
////        arr[0] = n;
////    
////}
////int main() {
////    int arr[11] = { 1,2,3,4,5,6,7,8,10,12 };
////    int n=0;
////    int sz = sizeof(arr) / sizeof(arr[0]);
////
////    printf("请输入一个数:");
////    scanf("%d", &n);
////    insert(arr, n, sz);
////    for (int i = 0; i < 11; i++)
////    {
////        printf("%d ", arr[i]);
////    }
////    return 0;
////
////}
////
////
//
//
////我很喜欢周美云，她就是一个大傻子。
////int main() {
////    int y = 0;
////    int m = 0;
////    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////    while (scanf("%d,%d", &y, &m) != EOF)
////    {
////        int day = arr[m];
////        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
////        {
////            if (m == 2)
////                day += 1;
////        }
////
////        printf("%d\n", day);
////
////        return 0;
////    }
////}
////  
//	//输入年 月 判断该月多少天
//
////int main() {
////    int y = 0;
////    int m = 0;//天数固定设计一个数组
////    int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////    while (scanf("%d %d", &y, &m) != EOF) {//ctrl+Z退出
////        int day = arr[m];//不要对arr[m]直接修改会改动数组内容
////        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
////            if (m == 2)
////                day += 1;
////        }
////        printf("%d\n", day);
////    }
////    return 0;
////}
////int main() {
////    int y = 0;
////    int m = 0;
////    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////    while (scanf("%d %d", &y, &m) != EOF) {
////        int day = arr[m];
////        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
////            if (m == 2)
////                day += 1;
////          
////        }
////        printf("%d\n",day);
////    }
////    return 0;
////}
////int main() {
////    int a = 0;
////    int b = 0;
////    int c = 0;
////    int d = 0;
////    int e = 0;
////    for ( a = 1; a <= 5; a++)
////    {
////        for (b = 1; b <= 5; b++) {
////            for ( c = 1; c <= 5; c++)
////            {
////                for (d = 1; d <= 5; d++) {
////                    for ( e = 1; e <= 5; e++)
////                    {
////                        if ((b == 2) + (a == 3) == 1
////                            && (b == 2) + (e == 4) == 1
////                            && (c == 1) + (d == 2) == 1
////                            && (c == 5) + (d == 3) == 1
////                            && (e == 4) + (a == 1) == 1){
////                            if (a* b* c* d* e == 120) 
////                                printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a,b,c,d,e);
////                            
////                        }
////                      
////
////                    }
////                }
////            }
////        }
////    }
////    return 0;
////}
//
////int main() {
////    char mumber;
////    for ( mumber = 'A'; mumber <= 'D'; mumber++)
////    {
////        if ((mumber != 'A') + (mumber == 'C') + (mumber == 'D') + (mumber != 'D') == 3)
////            printf("%c", mumber);
////    }
////    return 0;
////}
////int main() {
////    char murder;
////    for (murder = 'A'; murder <= 'D'; murder++) {
////        //遍历这四个人，且要满足这4个条件
////        if ((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')
////            == 3) {//这四个条件里面3个真的一个假的，所以相加后的逻辑值 ==3才行
////            printf("murder是  %c\n", murder);
////        }
////    }
////    return 0;
////}
////void reverse(int arr[], int sz, int temp1[], int temp2[])
////{
////    int t1 = 0;
////    int t2 = 0; 
////    int i;
////    for (i = 0; i < sz; i++)
////    {
////        if (arr[i]%2!=0)
////        {
////            temp1[t1++] = arr[i];
////            
////        }
////        else if(arr[i]%2==0)
////        {
////            temp2[t2++] = arr[i];
////            
////        }
////    }
////    for ( i = 0; i < t1; i++)
////    {
////        arr[i] = temp1[i];
////
////    }
////    for ( i = 0; i < t2; i++)
////    {
////        arr[i] = temp2[i];
////    }
////
////}
////int main() {
////    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////    int temp1[10];//奇数组暂存
////    int temp2[10];// 偶数组暂存
////    int i;
////    int sz = sizeof(arr) / sizeof(arr[0]);
////    reverse(arr, sz, temp1, temp2);
////    for ( i = 0; i < sz; i++)
////    {
////        printf("%d\n", arr[i]);
////    }
////    return 0;
////}
//	//打印一个菱形，输如n的打印2*n - 1行的菱形
//
////int main() {
////    int n = 0;
////    printf("请输入一个数字:");
////    scanf("%d", &n);
////    int i, j;
////    for (i = 0; i < n; i++) {//打印上三角
////        //打印空格
////        for (j = 0; j < n - 1 - i; j++) {
////            printf(" ");
////        }
////        //打印*
////        for (j = 0; j <= 2 * i ; j++) {
////            printf("*");
////        }
////        printf("\n");
////    }
////    //打印下三角
////    for (i = 0; i < n - 1; i++) {
////        //打印空格
////        for (j = 0; j <= i; j++) {
////            printf(" ");
////        }
////        //打印*
////        for (j = 0; j <= 2 * n - 4 - 2 * i; j++) {
////            printf("*");
////        }
////        printf("\n");
////    }
////    return 0;
////}
////
//	//输入一个整数找出紧跟在他后面的素数
////int find(int n) {
////    int i;
////    while (n) {
////        for (i = 2; i < n; i++) {
////            if (n % i == 0) {
////                break;
////            }
////        }
////        if (n == i)return n;
////        n++;
////    }
////    printf("输入不合法");
////    return -1;
////}
////int  main() {
////    int n = 0;
////    printf("请输入一个大于1的数：");
////    scanf("%d", &n);
////    printf("紧跟的素数是:%d", find(n));
////    return 0;
////}
////int isPrime(int n) {
////    if (n <= 1) {
////        return 0;
////    }
////
////    for (int i = 2; i < n; i++) {
////        if (n % i == 0) {
////            return 0;
////        }
////    }
////
////    return 1;
////}
////
////int findNextPrime(int n) {
////    int nextPrime = n + 1;
////
////    while (1) {
////        if (isPrime(nextPrime)) {
////            return nextPrime;
////        }
////
////        nextPrime++;
////    }
////}
////
////int main() {
////    int n;
////    printf("请输入一个整数：");
////    scanf("%d", &n);
////
////    int nextPrime = findNextPrime(n);
////
////    printf("紧跟在%d后面的素数是：%d\n", n, nextPrime);
////
////    return 0;
////}
////int main() {
////    int a = 0, total = 0, n = 0, temp = 0;
////    printf("请输入一个数:a\n");
////    scanf("%d", &a);
////    printf("请输入这个数的幂次:n\n");
////    scanf("%d", &n);
////
////    while (n) {
////        //第一次 0*10+2=2   第二次 2*10+2=22  .......
////        temp = temp * 10 + a;
////        //累加
////        total += temp;
////        n--;//次数-1
////    }
////    printf("%d", total);
////    return 0;
////}
////递归方法求最大公约数
//int fun(int m, int n) {
//	if (n == 0)return m;
//	else {
//		int r = m % n;
//		m = n;
//		n = r;
//		return fun(m, n);
//	}
//}
//
//int main() {
//	int m, n;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &m, &n);
//	if (m < n) {
//		int t = m;
//		m = n;
//		n = t;
//	}
//
//	printf("最大公约数是：%d\n", fun(m, n));
//	return 0;
//}
////int abc (int a,int b){
////    if (b == 0) {
////        return a;
////    }
////    return abc(b, a % b);
////}
////int lcm(int a, int b) {
////    return (a*b) / abc(a, b);
////}
////int main() {
////    int a, b;
////    printf("请输入两个整数：\n");
////    scanf("%d %d", &a, &b);
////
////    int greatestCommonDivisor = abc(a, b);
////    int leastCommonMultiple = lcm(a, b);
////
////    printf("最大公因数为：%d\n", greatestCommonDivisor);
////    printf("最小公倍数为：%d\n", leastCommonMultiple);
////
////    return 0;
////}
//
//	//一个数 +100之后是完全平方数,+168还是一个完全平方数 
//	//2*2=4 3*3=9 就是完全平方数
//
////int main() {
////    int n = 1, k = 0, m = 0, k1;
////    while (n) {
////
////        k1 = sqrt(n + 100);//返回一个double 放int 直接取整了
////        k = sqrt(n + 168);
////        if (k * k == n + 168 && k1 * k1 == n + 100) {
////            printf("%d", n);
////            break;
////        }
////        n++;
////    }
////    return 0;
////}
//	//数字金字塔
////int main() {
////    int n = 0;
////    printf("请输入一个数：");
////    scanf("%d", &n);
////    int i = 0, j = 0;
////    //打印三角
////    for (i = 0; i < n; i++) {
////        //打印空格
////        for (j = 0; j < n - 1 - i; j++)
////            printf(" ");
////        //打印*
////        for (j = 0; j <= 2 * i; j++) {
////            printf("%d", n);
////        }
////        printf("\n");
////    }
////    return 0;
////}
////
//
////字符串左旋
////实现一个函数，可以左旋字符中的K个字符
////例如：
////ABCD左旋一个字符变成BCDA
////ABCD左旋两个字符变成CDAB
////void reverse(char a[], char n) {
////	int end = strlen(a) - 1, i;//end指向最后一个
////	char temp;
////	while (n) {
////		temp = a[end];//把最后一个挪到temp暂存
////		//从倒数第2个开始向前挪
////		for (i = end - 1; i >= 0; i--) {
////			a[i + 1] = a[i];
////		}
////		//挪完把temp的字符放到a[0]
////		a[0] = temp;
////		n--;
////	}
////}
////int main() {
////	char a[20];
////	printf("请输入一个字符串:");
////	gets(a);
////	int n = 0;
////	printf("请输入一个左旋的数字:");
////	scanf("%d", &n);
////	reverse(a, n);
////	printf("%s\n", a);
////	return 0;
////}
////
//  //要求：写一个函数判断一个字符串是否是另一个字符串旋转后得到的
//	//例如：ABCDE与EDCBA这俩个显然是
//	//abcd与ABCD 这显然不是
////#include<string.h>
////int judge_string(char* str1, char* str2) {
////    int i, j = 0;
////    int len = strlen(str1);
////    //循环字符串长度次
////    for (i = 0; i < len; i++) {
////        //先比较两个字符串是不是相等
////        if (strcmp(str1, str2) == 0)
////            return 1;
////
////        //不相等,挪1位在判断是不是相等
////        char endchar = str1[strlen(str1) - 1];
////        //从倒数第2个开始向前挪
////        for (j = strlen(str1) - 2; j >= 0; j--) {
////            str1[j + 1] = str1[j];
////        }
////        str1[0] = endchar;
////        //接着循环比较挪完1位的是不是相同了
////    }
////    return 0;
////}
////int main() {
////    char arr1[10] = "ABCDEF";
////    char arr2[10] = "FEDCBA";
////    int ret = judge_string(arr1, arr2);//返回1 说明是，返回0 不是
////    if (ret == 1) {
////        printf("yes");
////    }
////    else printf("no");
////    return 0;
////}
////
////
//	//要求：写一个函数判断一个字符串是否是另一个字符串旋转后得到的
//	//例如：ABCDE与EDCBA这俩个显然是
//	//abcd与ABCD 这显然不是
//
////int judge_string(char* str1[],char* str2[]) {
////    int i, j = 0;
////    int len = strlen(str1);
////    //循环字符串长度次
////    for (i = 0; i < len; i++) {
////        //先比较两个字符串是不是相等
////        if (strcmp(str1, str2) == 0)
////            return 1;
////
////        //不相等,挪1位在判断是不是相等
////        char endchar = str1[strlen(str1) - 1];
////        //从倒数第2个开始向前挪
////        for (j = strlen(str1) - 2; j >= 0; j--) {
////            str1[j + 1] = str1[j];
////        }
////        str1[0] = endchar;
////        //接着循环比较挪完1位的是不是相同了
////    }
////    return 0;
////}
////int main() {
////    char arr1[10] = "ABCDEF";
////    char arr2[10] = "CDEFAB";
////    int ret = judge_string(arr1, arr2);//返回1 说明是，返回0 不是
////    if (ret == 1) {
////        printf("yes");
////    }
////    else printf("no");
////    return 0;
////}
//
////int main()
////{
////    int n=0;
////    printf("请输入一个数字:");
////    scanf("%d",&n);
////    int i = 0,j = 0,k = 0;
////    for ( i = 0; i < n; i++)
////    {
////        for (j = 0; j < n - 1 - i; j++) {
////            printf(" ");
////        }
////            for ( k = 0; k <= 2 * i ; k++)
////            {
////                printf("%d",n);
////            }
////        
////        printf("\n");
////    }
////    return 0;
////}
////#include <stdio.h>
//
////int main() {
////    int n = 0;
////    printf("请输入一个数字: ");
////    scanf("%d", &n);
////    int i = 0, j = 0;
////
////    for (i = 0; i < n; i++) {
////        // 打印空格
////        for (j = 0; j < n - 1 - i; j++) {
////            printf(" ");
////        }
////
////        // 打印数字 n
////        for (j = 0; j < 2 * i + 1; j++) {
////            printf("%d", n);
////        }
////
////        printf("\n");
////    }
////
////    return 0;
////}
////void lexu(char a[],int n)
////{
////    int end = strlen(a)-1, i;
////    char temp;
////    while (n)
////    {
////        temp = a[end];
////
////
////        for (i = end - 1; i >= 0; i--)
////        {
////            a[i + 1] = a[i];
////
////        }
////        a[0] = temp;
////        n--;
////    }
////
////}
////int main()
////{
////    char a[20];
////    printf("请输入一个字符串:");
////    gets(a);
////    int n = 0;
////    printf("请输入左旋的次数:");
////    scanf("%d", &n);
////    lexu(a, n);
////    printf("%s",a);
////    return 0;
////}
//
//
////int check_sys()
////{
////    int i = 1;
////    return (*(char*)&i);
////}
////int main()
////{
////    int ret = check_sys();
////    if (ret == 1)
////    {
////        printf("小端\n");
////    }
////    else
////    {
////        printf("大端\n");
////    }
////    return 0;
////}
////
////int main()
////{
////    char a = -1;
////    signed char b = -1;
////    unsigned char c = -1;
////    printf("a=%d,b=%d,c=%d", a, b, c);
////    return 0;
////}
////int main()
////{
////    
////int main()
////{
////    char a[1000];
////    int i;
////    for (i = 0; i < 1000; i++)
////    {
////        a[i] = -1 - i;
////    }
////    printf("%d", strlen(a));
////    return 0;
////}
////unsigned char i = 0;
////int main()
////{
////    for (i = 0; i <= 255; i++)
////    {
////        printf("hello world\n");
////    }
////    return 0;
////}
//
//	//给数组删除重复的元素
////#define N 12
////int main() {
////    int a[N] = { 1, 1, 2, 3, 3, 4, 6, 4, 8, 6, 9, 8 };
////    int i = 0, j = 0, n = N;
////    //n个数比较n-1次
////    printf("==========去重之前=========\n");
////    for (i = 0; i < n; i++) {
////        printf("%d ", a[i]);
////    }
////    for (i = 0; i < n - 1; i++) {
////
////        for (j = i + 1; j < n; j++) {
////            if (a[i] == a[j]) {
////                //i位置上的数和后面的比较要是相同，依次向前挪
////                for (int k = j; k < n - 1; k++) {
////                    a[k] = a[k + 1];
////                }
////                --n;//把一个数字给干掉了所以n--;
////                --j;//从j+1后面的位置一直依次向前挪 j位置被换了新值，所以--j还要再次看
////                //当前j位置的数与前面的重复嘛
////            }
////
////        }
////    }
////    printf("\n==========去重之后=========\n");
////    for (i = 0; i < n; i++) {
////        printf("%d ", a[i]);
////    }
////    return 0;
////}
//
//
//////C语言编程题————求1！ + 2！ + 3！ + 4！..... + N！
////int main() {
////    int total = 0, t = 1, i = 0;
////    int n;
////    printf("请输入一个数:");
////    scanf("%d", &n);
////    for (i = 1; i <= n; i++) {
////        t *= i;//累乘 第一次 1！ 第二次 2! 
////
////        printf("%d的阶乘 : %d\n", i, t);
////        total += t;//累加阶乘
////    }
////    printf("总和 %d! :%d\n", n, total);
////    return 0;
////}
//
////法1 递归法
////int fib(int n) {
////    if (n > 2) {
////        return fib(n - 1) + fib(n - 2);
////    }
////    else return 1;
////}
////int main() {
////    int n = 0;
////    printf("您要得到第几个斐波那契数：");
////
////    printf("%d\n", fib(n));
////
////    return 0;
////}
//
//
////数组去重
////#define N  12
////int main()
////{
////    int arr[N] = {1,2,3,3,4,4,5,6,7,7,8};
////    int i = 0;
////    int n = N;
////    int j = 0;
////    //去重之前
////    for ( i = 0; i < n; i++)
////    {
////        printf("%d", arr[i]);
////    }
////    //开始去重
////    for ( i = 0; i <n-1 ; i++)
////    {
////        for ( j = i+1; j < n; j++)
////        {
////            if (arr[i] == arr[j]) {
////                for (int k = j; k < n - 1; k++)
////                {
////                    arr[k] = arr[k + 1];
////                }
////                --n;
////                --j;
////            }
////        }
////    }
////    //去重之后
////    for ( i = 0; i < n; i++)
////    {
////        printf("%d", arr[i]);
////    }
////    return 0;
////}‘’
//
////int main()
////{
////    int total = 0;
////    int n;
////    int i = 0;
////    int t = 1;
////        printf("请输入一个数：");
////        scanf("%d", &n);
////        for ( i = 1; i <= n; i++)
////        {
////            t *= i;
////            printf("%d的阶乘是：%d\n",i,t);
////            total += t;
////        }
////        printf("总和%d! :%d\n", n, total);
////        return 0;
////
////}
////int fid(int n) {
////    if (n > 2) {
////        return fid(n - 1) + fid(n - 2);
////
////    }
////    else
////    {
////        return 1;
////    }
////}
////int main()
////{
////    int n = 0;
////    printf("请输入你想知道的斐波那契数：");
////    scanf("%d", &n);
////    fid(n);
////    printf("位于%d的斐波那契数是：%d\n", n, fid(n));
////    return 0;
////}
//
////C语言编程————输入n，k,求n的k次幂（用递归的方法）
////int fun(int n, int k) {
////    if (k < 1)
////        return 1;//0次幂都是1
////    else
////        return n * fun(n, k - 1);//否则 n*多次调用fun
////    //2*
////}
////int main() {
////    int n, k;
////    printf("请输入(n,k):");
////    scanf("%d%d", &n, &k);
////    printf("%d", fun(n, k));
////    return 0;
////}
////
////
////用函数实现输入一个数，把他的每一位相加在输出出来；如1234 1 + 2 + 3 + 4 = 10
////int deal(int num) {
////    if (num > 9)
////        return num % 10 + deal(num / 10);
////    //大于9 就先%10 得到余数 在加 deal(num/10）若小于10 单一一个数直接返回这个数
////    else 
////        return num;
////}
////int main() {
////    int num = 0;
////    printf("请输入一个数：");
////    scanf("%d", &num);
////    printf("%d各位相加之后的和是：%d\n", num, deal(num));
////    return 0;
////}
////
//
////实现函数把字符数组的元素逆序 如“abc“, 逆序成“cba“.
//
////void reverse(char a[]) {
////    int start = 0, end = strlen(a) - 1;//-1为了不去挪'\0'
////    while (start < end) {
////        //首尾交换 直到start和end都指向同一个或者start>end时候结束交换
////        char temp = a[start];
////        a[start] = a[end];
////        a[end] = temp;
////        start++;//向后指
////        end--;//向前指
////    }
////
////}
////int main() {
////    char a[20];
////    printf("请输入一个字符串:");
////    gets(a);
////    reverse(a);
////    printf("逆序之后:%s\n", a);
////    return 0;
////}
//
//
////void reverse(char a[]) {
////    char temp = a[0];//进来之后先把当前数组的首元素赋值到临时变量
////
////    int len = strlen(a) - 1;//指向最后一个元素
////
////    a[0] = a[len];//把最后一个元素给第一个元素空间
////
////    a[len] = '\0';//把最后一个元素赋值'\0'
////
////    if (len >= 2) {//若是字符串长度大于2就要交换
////        reverse(a + 1);//再次调用 向前指一个
////    }
////    //完成递归之后 把在栈中的每个temp返回放到当前a[len]中
////    a[len] = temp;
////}
////
////int main() {
////    char a[20];
////    printf("请输入一个字符串:");
////    gets(a);
////    reverse(a);
////    printf("逆序之后:%s\n", a);
////    return 0;
////}
////
////
////
////递归拆分整数
////void deal(int n) {
////    if (n > 9)
////        deal(n / 10);
////    printf("%d ", n % 10);
////}
////int main() {
////    int num = 0;
////    printf("请输入一个数：\n");
////    scanf("%d", &num);
////    deal(num);
////    return 0;
////}
////设计以函数打印乘法口诀表，输入9，是99乘法表，输入8是88乘法表
////void Print1(int n) {
////    int i = 0, j = 0;
////    for (i = 1; i <= n; i++) {
////        for (j = 1; j <= i; j++) {
////            printf("%d*%d=%3d	", i, j, i * j);
////        }
////        printf("\n");
////    }
////}
////int main() {
////    int num = 0;
////    printf("请输入一个数：");
////    scanf("%d", &num);
////    Print1(num);
////    return 0;
////}
////素数100 - 200之间（只能被自己和1整除的数）
////int main() {
//	/*int i = 0;
//	for (i = 100; i <= 200; i++) {
//		int j;
//		for (j = 2; j < i; j++) {*/
//		/*         if (i % j == 0)
//					 break;
//			 }
//			 if (i == j)
//				 printf("%4d", i);
//		 }
//		 return 0;
//	 }*/
//
//	 //打印二进制数的奇数位和偶数位；分别打印二进制序列
//	 //void Print_two(int n) {
//	 //    int i;
//
//	 //    printf("打印奇数位:\n");
//	 //    //右移0位是第一个二进制 所以右移 30位其实是第31个二进制位
//	 //    for (i = 30; i >= 0; i -= 2) {
//	 //        printf("%d ", (1 & (n >> i)));
//	 //    }
//	 //    printf("\n打印偶数位:\n");
//	 //    //右移1位是第二个二进制 所以右移 31位其实是第32个二进制位
//	 //    for (i = 31; i >= 0; i -= 2) {
//	 //        printf("%d ", (1 & (n >> i)));
//	 //    }
//	 //}
//	 //int main() {
//	 //    int n = 0;
//	 //    printf("请输入一个数字:");
//	 //    scanf("%d", &n);
//	 //    Print_two(n);
//	 //    return 0;
//	 //}
//	 //计算M和N二进制中不同的位数，例如 1和7 有两位不同；
//	 /*int main() {
//		 int n, m;
//		 printf("请输入2个数:");
//		 scanf("%d%d", &n, &m);
//		 int t = m ^ n;*///通过二进制亦或后，相同为0不同为1,故此t里面1的个数就代表n和m之间有几个二进制位
//		 //不同
//
//		 //求出t里面有多少个1
//		// int count = 0, i = 0;
//	 //    while (i < 32) {//移位32次 移了31位
//	 //        //右移1位与1==1就说明当前二进制位是1
//	 //        if (t >> i & 1 == 1) {
//	 //            count++;
//	 //        }
//	 //        i++;
//	 //    }
//	 //    printf("二进制位不同有%d位\n", count);
//	 //    return 0;
//	 //}
//
//	 //输出1900到2000之间的所有闰年
//	 //int main() {
//	 //    for (int i = 1900; i <= 2000; i++) {//世纪闰年 必须是400的倍数
//	 //        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//	 //        {
//	 //            printf("%d是闰年  ", i);
//	 //        }
//	 //    }
//	 //}//润年分为世纪闰年和普通润年  
//	 //普通闰年是  能整除4就行   为啥还要加%100不等于0呢  排除不是世纪闰年的 比如1900 不是闰年
//	 //整百数的世纪闰年是   能整除400就行
//	 //int main()
//	 //
//	 //{
//	 //    int a = 10;
//	 //    int b = 20;
//	 //    a = a ^ b;
//	 //    b = a ^ b;
//	 //    a = a ^ b;
//	 //    printf("a = %d b = %d\n", a, b);
//	 //    return 0;
//	 //}
//
//	 /*有一群猴子，去摘了一堆桃子*/
//
//	 /*商量之后决定每天吃剩余桃子的一半*/
//
//	 /*当每天大家吃完桃子之后，有个贪心的小猴都会偷偷再吃一个桃子*/
//
//	 /*按照这样的方式猴子们每天都快乐的吃着桃子*/
//
//	 /*直到第十天，当大家再想吃桃子时，发现只剩下一个桃子了*/
//
//	 //问：猴子们一共摘了多少桃子
//
//	 //当前天吃前一天的一半零一个 
//	   //prvday/2+1=curday  ---->(curday+1)*2=prvday
//	 //前一天/2+1=当前天的数量  
//
//	 //int main() {
//	 //    int curday = 1, prvday = 0;
//	 //    int days = 9;
//	 //    while (days > 0) {
//	 //        //第一次循环 算出第一次前一天的数量
//	 //        prvday = (curday + 1) * 2;
//	 //
//	 //        curday = prvday;//前一天的数量在给到当前天 接着循环
//	 //        days--;
//	 //    }
//	 //    printf("猴子摘了%d个桃子\n", curday);
//	 //    return 0;
//	 //}
//	 //Print_(int* a, int sz) {
//	 //    printf("打印数组情况===============\n");
//	 //
//	 //    for (int i = 0; i < sz; i++) {
//	 //        printf("%d ", a[i]);
//	 //    }
//	 //    printf("\n");
//	 //}
//	 //
//	 ////选择排序法 升序排列
//	 //int main() {
//	 //    int a[10] = { 1, 4, 7, 2, 5, 8, 3, 6, 9, 0 };
//	 //    int i, j, index;
//	 //    int sz = sizeof(a) / sizeof(a[0]);
//	 //    //10个数循环比较9次就行
//	 //    for (i = 0; i < sz - 1; i++) {
//	 //        index = i;//index看为擂主
//	 //        for (j = i + 1; j < sz; j++) {
//	 //            //index和j下标的打擂台，让index指向最小的数
//	 //            if (a[index] > a[j])
//	 //                index = j;
//	 //
//	 //        }
//	 //        if (index != i) {//把最小的数放到i下标的位置
//	 //            int t = a[index];
//	 //            a[index] = a[i];
//	 //            a[i] = t;
//	 //        }
//	 //    }
//	 //
//	 //    Print_(a, sz);
//	 //
//	 //    return 0;
//	 //}
//
//	 ////冒泡排序法
//	 //Print_(int* a, int sz) {
//	 //    printf("打印数组情况===============\n");
//	 //
//	 //    for (int i = 0; i < sz; i++) {
//	 //        printf("%d ", a[i]);
//	 //    }
//	 //    printf("\n");
//	 //}
//	 //
//	 //int main() {
//	 //    int a[10] = { 1, 4, 7, 2, 5, 8, 3, 6, 9, 0 };
//	 //    int i, j;
//	 //    int sz = sizeof(a) / sizeof(a[0]);
//	 //    //10个数循环比较9次就行
//	 //    for (i = 0; i < sz - 1; i++) {
//	 //
//	 //        for (j = 0; j < sz - 1 - i; j++) {
//	 //            //从0号下标开始和后面的比较，若是当前j号大于j+1号就交换
//	 //            //第1轮把最大的放到最后，所以j < sz - 1 - i  减i为了
//	 //            //之前挪到后面的较大数不在发生没必要的比较
//	 //
//	 //            if (a[j] > a[j + 1]) {
//	 //                int t = a[j];
//	 //                a[j] = a[j + 1];
//	 //                a[j + 1] = t;
//	 //            }
//	 //        }
//	 //    }
//	 //
//	 //    Print_(a, sz);
//	 //    return 0;
//	 //}
//	 //
//	 //求3*3矩阵对角元素的和
//	 //int main() {
//	 //    int total = 0, a[3][3] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//	 //    int i, j;
//	 //    //主对角
//	 //    for (i = 0; i < 3; i++) {
//	 //        total += a[i][i];
//	 //    }
//	 //    //副对角
//	 //    for (i = 0, j = 2; i < 3; i++, j--) {
//	 //        if (i != j) {
//	 //            total += a[i][j];
//	 //        }
//	 //    }
//	 //
//	 //    printf("total=%d\n", total);
//	 //    return 0;
//	 //}
//
//	 //把整数数组中的元素值逆序存放
//	 // 打印函数，用于打印整数数组
//	 //void Print_(int arr[], int size) {
//	 //    for (int i = 0; i < size; i++) {
//	 //        printf("%d ", arr[i]);
//	 //    }
//	 //    printf("\n");
//	 //}
//	 //
//	 //int main() {
//	 //    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	 //    int left = 0 ;
//	 //    int right = sizeof(a) / sizeof(a[0]) - 1;
//	 //
//	 //    while (left < right) {
//	 //        int t = a[left];
//	 //        a[left] = a[right];
//	 //        a[right] = t;
//	 //        left++;
//	 //        right--;
//	 //    }
//	 //
//	 //    Print_(a, 10);//打印函数
//	 //    return 0;
//	 //
//	 //}
//
//	 //杨辉三角形
//	 //int main(){
//	 //	//利用二维数组
//	 //	int a[10][10];
//	 //	for (int i = 0; i < 10; i++){//循环10次
//	 //		for (int j = 0; j <= i; j++){
//	 //			if (0 == j || i == j){
//	 //				a[i][j] = 1;//对角线元素和0列赋值
//	 //			}
//	 //			else{//其余元素赋值
//	 //				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//	 //			}
//	 //		}
//	 //	}
//	 //	for (int i = 0; i < 10; i++){
//	 //		for (int j = 0; j <= i; j++){
//	 //			printf("%4d", a[i][j]);
//	 //		}
//	 //		printf("\n");
//	 //	}
//	 //	return 0;
//	 //}
//	 //
//	 //
//	 //
//
//
//
//	 //// 计算组合数C(n, k)
//	 //int calculateCombination(int n, int k) {
//	 //    if (k == 0 || k == n) {
//	 //        return 1;
//	 //    }
//	 //    else {
//	 //        return calculateCombination(n - 1, k - 1) + calculateCombination(n - 1, k);
//	 //    }
//	 //}
//	 //
//	 //int main() {
//	 //    int numRows;
//	 //
//	 //    printf("请输入要打印的杨辉三角的行数：");
//	 //    scanf("%d", &numRows);
//	 //
//	 //    for (int i = 0; i < numRows; i++) {
//	 //        for (int j = 0; j <= (numRows - i - 2); j++) {
//	 //            printf("  "); // 打印空格对齐
//	 //        }
//	 //        for (int j = 0; j <= i; j++) {
//	 //            int value = calculateCombination(i, j);
//	 //            printf("%4d", value); // 打印组合数，并保持4位宽度对齐
//	 //        }
//	 //        printf("\n");
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//	 //
//
//
//	 //折半查找---必须建立在有序的数组中
//	 //int main() {
//	 //    int a[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11 };
//	 //    //left指向第一个  right指向最后一个
//	 //    int left = 0;
//	 //    int right = sizeof(a) / sizeof(a[0]) - 1;
//	 //
//	 //    int n, mid = right;//第一次指向最后一个
//	 //    printf("请输入要查找得数：");
//	 //    scanf("%d", &n);
//	 //
//	 //
//	 //    while (left < right) {
//	 //
//	 //        if (a[mid] < n) {//中间元素<n 说明当前左边的全小于n
//	 //            left = mid;//所以left等于mid
//	 //        }
//	 //        else if (a[mid] > n) {//中间元素>n 说明当前右边的全大于n
//	 //            right = mid;//所以right等于mid
//	 //        }
//	 //        else {
//	 //            printf("找到了 下标是%d\n", mid);
//	 //            break;
//	 //        }
//	 //        mid = (left + right) / 2;//在除以2改变循环条件
//	 //    }
//	 //
//	 //    if (left >= right)printf("没有找到该元素\n");
//	 //    return 0;
//	 //}
//	 //
//	 //
//
//
//
//
//
//	 // 计算3行  80个字符 的类型个数
//	 //int main() {
//	 //    char ch[3][80];
//	 //    int i = 0;
//		 //输入3行字符
//		 //for (i = 0; i < 3; i++){
//		 //	gets(ch[i]);//scanf遇到空格或者换行就结束了
//		 //}
//	   /*  int max_sum = 0, min_sum = 0, number_sum = 0, speace_sum = 0, other_sum = 0;
//		 for (i = 0; i < 3; i++) {
//			 gets(ch[i]);
//			 for (int j = 0; ch[i][j] != '\0'; j++) {
//				 if (ch[i][j] >= 'a' && ch[i][j] <= 'z')
//					 min_sum++;
//				 else if (ch[i][j] >= 'A' && ch[i][j] <= 'Z')
//					 max_sum++;
//				 else if (ch[i][j] >= '0' && ch[i][j] <= '9')
//					 number_sum++;
//				 else if (ch[i][j] == ' ')
//					 speace_sum++;
//				 else other_sum++;
//			 }
//		 }
//		 printf("小写字母：%d\n大写字母：%d\n数字数量：%d\n空格数量：%d\n其它字符数量：%d\n", min_sum, max_sum, \
//			 number_sum, speace_sum, other_sum);
//		 return 0;
//	 }
//
//
//
//
//	 */
//
//	 //原文与密码  输入A转换为Z B<-->Y   c<-->X  以此类推
//
//	 //int main() {
//	 //    char a[30];
//	 //
//	 //    printf("请输入一串字母:\n");
//	 //    gets(a);
//	 //    int i = 0;
//	 //    while (a[i]) {
//	 //        if (a[i] >= 'a' && a[i] <= 'z') {
//	 //            a[i] = 'a' + 25 - (a[i] - 'a');
//	 //            //基值'a' +25-（差值）  a[i] 若是'a'  a[i]-'a'=0  'a'+25+0=z
//	 //
//	 //        }
//	 //        if (a[i] >= 'A' && a[i] <= 'Z') {
//	 //            a[i] = 'A' + 25 - (a[i] - 'A');
//	 //            //基值'a' +25-（差值）  a[i] 若是'a'  a[i]-'a'=0  'a'+25+0=z
//	 //
//	 //        }
//	 //        i++;
//	 //
//	 //    }
//	 //    printf("转换之后：%s\n", a);
//	 //    return 0;
//	 //}
//	 //
//	 //
//	 //模拟strcat字符串连接函数
//	 //
//
//	 //模拟strlen
//	 //方法1 普通式
//	 //
//
//
//	 //模拟strcmp--两个字符串完全相等就返回0 不相等就返回*a-*b的差值
//	 //int My_strcmp(char* a, char* b) {
//	 //    while (*a == *b) {//对应下标数的字符相等就循环
//	 //        if (*a == '\0')
//	 //            return 0;//若是有一个等于'\0'说明这两串相等
//	 //        a++, b++;//++比较下一位
//	 //    }
//	 //    return *a - *b;//不满足循环就返回差值
//	 //}
//	 //int main() {
//	 //    char a[30], b[30];
//	 //    printf("请输入2个字符串:");
//	 //    gets(a);
//	 //    gets(b);
//	 //    int flag = My_strcmp(a, b);
//	 //    if (!flag)
//	 //        printf("两个字符串是相等的--返回%d\n", flag);
//	 //    else
//	 //        printf("两个字符串是不相等的--返回%d\n", flag);
//	 //    return 0;
//	 //}
//	 //
//
//	 //#include <stdio.h>
//	 //#include <string.h>
//	 //
//	 //int main() {
//	 //    char str1[100]; // 假设字符串长度不超过 100
//	 //    char str2[100];
//	 //
//	 //    printf("请输入第一个字符串: ");
//	 //    scanf("%s", str1);
//	 //
//	 //    printf("请输入第二个字符串: ");
//	 //    scanf("%s", str2);
//	 //
//	 //    int result = strcmp(str1, str2);
//	 //
//	 //    if (result < 0) {
//	 //        printf("%s 小于 %s\n", str1, str2);
//	 //    }
//	 //    else if (result == 0) {
//	 //        printf("%s 等于 %s\n", str1, str2);
//	 //    }
//	 //    else {
//	 //        printf("%s 大于 %s\n", str1, str2);
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//
//
//	 //#include <stdio.h>
//	 //#include <string.h>
//	 //
//	 //int main() {
//	 //    char str1[100];
//	 //    char str2[100];
//	 //
//	 //    printf("请输入第一个字符串: ");
//	 //    fgets(str1, sizeof(str1), stdin);
//	 //
//	 //    printf("请输入第二个字符串: ");
//	 //    fgets(str2, sizeof(str2), stdin);
//	 //
//	 //    // 去除换行符
//	 //    str1[strcspn(str1, "\n")] = '\0';
//	 //    str2[strcspn(str2, "\n")] = '\0';
//	 //
//	 //    int result = strcmp(str1, str2);
//	 //
//	 //    if (result < 0) {
//	 //        printf("%s 小于 %s\n", str1, str2);
//	 //    }
//	 //    else if (result == 0) {
//	 //        printf("%s 等于 %s\n", str1, str2);
//	 //    }
//	 //    else {
//	 //    
//	 //    printf("%s 大于 %s\n", str1, str2);
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//
//
//	 //int compareStrings(const char* str1, const char* str2) {
//	 //    int len1 = strlen(str1);
//	 //    int len2 = strlen(str2);
//	 //
//	 //    if (len1 < len2) {
//	 //        return -1;
//	 //    }
//	 //    else if (len1 > len2) {
//	 //        return 1;
//	 //    }
//	 //    else {
//	 //        return 0;
//	 //    }
//	 //}
//	 //
//	 //int main() {
//	 //    char str1[100];
//	 //    char str2[100];
//	 //
//	 //    printf("请输入第一个字符串: ");
//	 //    fgets(str1, sizeof(str1), stdin);
//	 //
//	 //    printf("请输入第二个字符串: ");
//	 //    fgets(str2, sizeof(str2), stdin);
//	 //
//	 //    // 去除换行符
//	 //    str1[strcspn(str1, "\n")] = '\0';
//	 //    str2[strcspn(str2, "\n")] = '\0';
//	 //
//	 //    int result = compareStrings(str1, str2);
//	 //
//	 //    if (result < 0) {
//	 //        printf("%s 长度小于 %s\n", str1, str2);
//	 //    }
//	 //    else if (result == 0) {
//	 //        printf("%s 长度等于 %s\n", str1, str2);
//	 //    }
//	 //    else {
//	 //        printf("%s 长度大于 %s\n", str1, str2);
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//
//
//
//	 //模拟字符串拷贝函数
//	 //void My_strcpy(char* a, char* b) {
//	 //    while (*a++ = *b++);//先用后加 先用*a的空  和*b的内容 换句话说就是
//	 //    //把*b的内容放到*a的空间中  然后a在++ b在++
//	 //}
//	 //int main() {
//	 //    char a[20], b[20];
//	 //    printf("请输入一个字符串:");
//	 //    gets(b);
//	 //    //b字符串拷贝到a数组
//	 //    My_strcpy(a, b);
//	 //    printf("拷贝到a数组之后:%s", a);
//	 //
//	 //    return 0;
//	 //}
//	 //
//
//	 //strncpy的模拟  拷贝给定的个数,若是输入的k大于b字符串长度，直接拷贝b字符串全部
//	 //void My_strncpy(char* a, char* b, int k) {
//	 //    while (k && (*a = *b)) {//进来先判断k值 若是0退出  或者*b赋值*a之后*a是'\0'了也退出
//	 //        a++, b++;//两个指针变量指向下一个字符
//	 //        k--;//拷贝的个数减1
//	 //    }
//	 //    if (*a != '\0')
//	 //        *a = '\0';//若拷贝了k个b数组还没有拷贝完  也就是从k=0这个条件退出的
//	 //    //*a不是'\0'要把'\0'拷贝过去
//	 //}
//	 //int main() {
//	 //    char a[20], b[20];
//	 //    printf("请输入一个字符串:\n");
//	 //    gets(b);//b字符串拷贝到a数组
//	 //    int k = 0;
//	 //    printf("请输入拷贝的个数:\n");
//	 //    scanf("%d", &k);
//	 //    My_strncpy(a, b, k);
//	 //    printf("拷贝到a数组之后:%s\n", a);
//	 //
//	 //    return 0;
//	 //}
//	 //
//
//	 //strncat模拟实现 
//	 //在字符串str1后面追加给定的k个字符  思路就别strncpy多一步  先找到str1的'\0'在追加
//	 //void My_strncat(char* str1, char* str2, int k) {
//	 //    while (*str1)str1++;//指向'\0'
//	 //    while (k && (*str1 = *str2)) {//进来先判断k值 若是0退出  或者*str2赋值*str1之后*str1是'\0'了也退出
//	 //        //两个指针变量指向下一个字符
//	 //        str1++, str2++;//向后指
//	 //        k--;//个数-1
//	 //    }
//	 //    if (*str1 != '\0')*str1 = '\0';//若拷贝了k个str2数组还没有拷贝完  也就是从k=0这个条件退出的
//	 //    //	//*str1不是'\0'要把'\0'拷贝过去
//	 //}
//	 //int main() {
//	 //    char str1[20];
//	 //    char str2[20];
//	 //    int k = 0;
//	 //    printf("请输入两个字符串:");
//	 //    gets(str1);
//	 //    gets(str2);
//	 //
//	 //    printf("请输入一个数:\n");
//	 //    scanf("%d", &k);
//	 //
//	 //    My_strncat(str1, str2, k);
//	 //    printf("连接之后:%s\n", str1);
//	 //    return 0;
//	 //}
//	 //#include <stdio.h>
//	 //#include <math.h>
//	 //
//	 //int main() {
//	 //    int i, j;
//	 //    double x, y;
//	 //    char heart[] = "♥♥♥♥♥♥♥";
//	 //
//	 //    for (i = 0; i <= 20; i++) {
//	 //        for (j = 0; j <= 40; j++) {
//	 //            x = (j - 20) / 10.0;
//	 //            y = (i - 10) / 5.0;
//	 //
//	 //            double distance = sqrt(x * x + y * y);
//	 //
//	 //            if (distance < 1.5) {
//	 //                int index = (i + j) % 7;
//	 //                printf("\033[31m%c", heart[index]); // 使用 ANSI 转义码设置文本颜色为红色
//	 //            }
//	 //            else {
//	 //                printf(" ");
//	 //            }
//	 //        }
//	 //        printf("\033[0m\n"); // 恢复默认文本颜色
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//	 //
//
//	 ////strncat模拟实现 
//	 ////在字符串str1后面追加给定的k个字符  思路就别strncpy多一步  先找到str1的'\0'在追加
//	 //void My_strncat(char* str1, char* str2, int k) {
//	 //    while (*str1)
//	 //        str1++;//指向'\0'
//	 //    while (k && (*str1 = *str2)) {//进来先判断k值 若是0退出  或者*str2赋值*str1之后*str1是'\0'了也退出
//	 //        //两个指针变量指向下一个字符
//	 //        str1++, str2++;//向后指
//	 //        k--;//个数-1
//	 //    }
//	 //    if (*str1 != '\0')
//	 //        *str1 = '\0';//若拷贝了k个str2数组还没有拷贝完  也就是从k=0这个条件退出的
//	 //    //	//*str1不是'\0'要把'\0'拷贝过去
//	 //}
//	 //int main() {
//	 //    char str1[20];
//	 //    char str2[20];
//	 //    int k = 0;
//	 //    printf("请输入两个字符串:");
//	 //    gets(str1);
//	 //    gets(str2);
//	 //
//	 //    printf("请输入一个数:\n");
//	 //    scanf("%d", &k);
//	 //
//	 //    My_strncat(str1, str2, k);
//	 //    printf("连接之后:%s\n", str1);
//	 //    return 0;
//	 //}
//
//
//
//	 //int My_strncmp(char* a, char* b, int k) {
//	 //    int t = k;
//	 //    while (k && *a == *b) {
//	 //        if (*a == '\0' || k == 0) {
//	 //            printf("前%d个字符是相同的退出\n\n", t);
//	 //            return 0;
//	 //        }
//	 //        a++, b++; // 指向下一个字符
//	 //        k--;      // 个数--
//	 //    }
//	 //    return *a - *b;
//	 //}
//	 //
//	 //int main() {
//	 //    char a[30], b[30];
//	 //    int k;
//	 //    printf("请输入两个字符串:\n");
//	 //    fgets(a, sizeof(a), stdin);
//	 //    fgets(b, sizeof(b), stdin);
//	 //    printf("请输入一个数K:\n");
//	 //    scanf("%d", &k);
//	 //    getchar(); // 清除输入缓冲区的换行符
//	 //    int flag = My_strncmp(a, b, k);
//	 //    if (!flag)
//	 //        printf("两个字符串是相等的--返回: %d\n", flag);
//	 //    else
//	 //        printf("两个字符串是不相等的--返回: %d\n", flag);
//	 //
//	 //    return 0;
//	 //}
//
//	 ////模拟寻找子串的函数strstr
//	 //char* My_strstr(char* a, char* b) {
//	 //    if (*b == '\0')return a;//如果b数组是空数组直接返回a数组名
//	 //    char* na = NULL;//内层指针
//	 //    char* nb = NULL;//内层指针
//	 //    while (*a) {
//	 //        na = a;//na每次指向下一个
//	 //        nb = b;//每次nb指向b串的第一个元素
//	 //        while (*nb == *na && *na != '\0' && *nb != '\0') {
//	 //            nb++, na++;//元素相等++
//	 //        }
//	 //        //如果*nb=='\0'说明上面循环nb指向'\0'前面几个元素是相等的
//	 //        if (*nb == '\0')return a;
//	 //        a++;
//	 //    }
//	 //    //a指向'\0'说明a不存在子串
//	 //    if (*a == '\0')return NULL;
//	 //}
//	 //
//	 //
//	 //int main() {
//	 //    char a[20];//abcdef
//	 //    char b[20];//abcdefj     查找a数组里面有没有bcd
//	 //    printf("请输入2个字符串:");
//	 //    gets(a);
//	 //    gets(b);
//	 //
//	 //    char* c = My_strstr(a, b);
//	 //    if (c != NULL)printf("找到了：%s\n", c);
//	 //    else printf("没有找到子串\n");
//	 //    return 0;
//	 //}
//	 //
//	 //
//
//	 //char* My_strstr(const char* haystack, const char* needle) {
//	 //    if (*needle == '\0') {
//	 //        return (char*)haystack;
//	 //    }
//	 //
//	 //    while (*haystack) {
//	 //        const char* na = haystack;
//	 //        const char* nb = needle;
//	 //
//	 //        while (*nb && *na == *nb) {
//	 //            na++;
//	 //            nb++;
//	 //        }
//	 //
//	 //        if (*nb == '\0') {
//	 //            return (char*)haystack;
//	 //        }
//	 //
//	 //        haystack++;
//	 //    }
//	 //
//	 //    return NULL;
//	 //}
//	 //
//	 //int main() {
//	 //    char a[20];
//	 //    char b[20];
//	 //
//	 //    printf("请输入两个字符串: ");
//	 //    fgets(a, sizeof(a), stdin);
//	 //    fgets(b, sizeof(b), stdin);
//	 //
//	 //    // 去掉输入字符串末尾的换行符
//	 //    a[strcspn(a, "\n")] = '\0';
//	 //    b[strcspn(b, "\n")] = '\0';
//	 //
//	 //    char* c = My_strstr(a, b);
//	 //    if (c != NULL) {
//	 //        printf("找到了：%s\n", c);
//	 //    }
//	 //    else {
//	 //        printf("没有找到子串\n");
//	 //    }
//	 //
//	 //    return 0;
//	 //}
//	 //
//	 //void proc()
//	 //{
//	 //
//	 //}
//	 //
//	 //int main()
//	 //{
//	 //    int weeekday = 0, pm25 = 0;
//	 //    char licence[7];
//	 //    scanf("%d %d %s", &pm25, &weeekday, licence);
//	 //    proc(pm25, weeekday, licence);
//	 //    return 0;
//	 //}
//	 //(1)pm25<200
//	 //(2)
//
//
//
//
//
////#define PM25_L1 200
////#define PM25_L2 400
////typedef enum { YES, NO } MARKTAG;
////int isDigit(char ch)
////{//判断ch是否为十进制数字字符是则返回1，否则返回0
////	return (ch >= '0' && ch <= '9');
////}
////void prt_msg(char* msg, MARKTAG flag)
////{
////	if (flag == YES)
////		printf("%s : traffic restrictionsin", msg);
////	else
////		printf("%s : freeln", msg);
////}
////int isMatched(int weekday, int t, int d) //判断是否符合限行规则，是则返回1，否则返回0
////{
////	return (weekday % d == t % d);
////}
////void proc(int pm25, int weekday, char* licence)
////{
////int i, lastd;
////if (weekday == 6 || weekday == 7 || pm25 < 200)
////	prt_msg(licence, NO);
////else {
////	for (i = 5; i >= 0; i--)
////		if (isDigit(licence[i])) {
////			lastd = licence[i] - '0'; // 获取车牌号的尾号
////			break;
////		}
////	if (pm25 >= PM25_L2) {//限行5个尾号的汽车
////		if (isMatched(weekday,lastd,2))
////			prt_msg(licence, YES);
////		else
////			prt_msg(licence, NO);
////	}
////
////	else {//限行2个尾号的汽车
////		if (isMatched(weekday,lastd,5))
////			prt_msg(licence, YES);
////		else
////			prt_msg(licence, NO);
////	}
////}
////}
////
////int main() {
////
////	int weekday = 0, pm25 = 0;
////		char licence[7];
////	scanf("%d %d %s", &pm25, &weekday, licence);
////		//输入数据的有效性检测略，下面假设输入数据有效、正确
////	proc(pm25,weekday,licence);
////		return 0;
////}
//
//
//
//
//
////填空题
//// 
////第一题
////(1)pm25<200
////(2)licence[i]-'0'
////(3)weekday,lastd,2;
////(4)weekday,lastd,5;
////pm25,weekday,licence
//
////第二题
////(1)arr[n]
////(2)arr[i+1] = arr[i]
////(3)arr[i+1]
////(4)break
////(5)idx
//// 
//// 
////第三题
////(1)date[i-1]
////(2)arr[j+1] = date[j]
////(3)date[j+1]
////(4)arr
////(5)*bp
//
////第四题
////(1)j<n
////(2)j++
////(3)k=j
////(4)data[i] = data[k]
////(5)i=0
//// 
//// 
////第五题
////(1)A[i]
////(2)C[k]+1
////(3)1
////(4)k和C[k]
////(5)2,2
//
////第六题
////(1)K[i]/P
////(2)0
////(3)F(j) = 1
////(4)j++
////(5)j = 0
//
////第七题
////(1)head->next
////(2)ptr && ptr->next
////(3)q->data == ptr->data
////(4)ptr->next
////(5)ptr
//
//
//
////第八题
////(1)feof(fp) == 0
////(2)i < n && str[i]!='\0' 
////(3)tag>=1&&tag<=3
////(4)q++
////(5)candidate[i]++
//// 
////第九题
////(1)m%10
////(2)k-1-i
////(3)!isHW(n)
////(4)a
////(5)n+a
//
//
//
////第十题
////(1)days++
////(2)date == 5
//// (3)m <= 12
////(4)isLeapYear(year)
////(5)date
//
//
//
////选词填空
//// （1）第一题BACED
////B:用户对新系统提出基本要求和主要功能
////A：开发人员对用户需求进行总结
////C：开发系统原型
////E：运行。评价原型
////D：确定原型后处理
//
//
////第二题
////CDABH
////C:链路层
////D：网络层
////A：传输层 
////B：应用层
////H：UDP
////
//
////第三题
//
////E  connection
////C  command
////A  DataAdaper
////B  DataSet
////D  DataView
////ECABD
////
//
//
////第四题
////CEFH
////A[n-i+1]
////T&&A[i]>0
////T
////n
////
////第五题
////CABE
////逻辑非
////逻辑与
////逻辑或
////false
////
////
////
////第六题
////DCEAB
////User
////SOAP over HTTP
////internet
////Web Service
////XML
////
////第七题
////BDEHA
////
////n
////j-1->j
////i+1->i
////j
////1
////
////第八题
////CDBAFE
////表达式1
////表达式2
////false
////true
////循环体
////表达hi3
////
////
////第九题
////BCEGD
////2 
////N%K
////S+K
////S
////K%N
////
////第十题
////ACFHG
////a[i]<minimum
////a[i] > maximum
////0
////b[k]>0
////k
////
////第十一题
////BDEGH
////num >= 10000
////result = 0
////m/10
////d*10+d
////mul*10
////
////
////第十二题
////ADEGH
////j<4
////t = j
////a[0]*1000+a[1]*100+a[2]*10+a[3]
////a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]
////n/1000
////
////
////第十三题
////ECHF
////条件组合覆盖
////语句覆盖
////8
////2
////
////
////
////第十四题
////CABEDF
////制定测试计划
////设计测试用例
////执行测试
////撰写测试报告
////消除软件缺陷
////回归测试
////
////
////第十五题
////CDAB
////制定测试计划
////设计测试用例
////执行系统测试
////缺陷管理与改错
////
////
////
////简答题
////第一题
////数据结构 : 数据结构指的是数据之间的相互关系，即数据的组织形式。
////数据结构一般包括以下方面内容:数据的逻辑结构、数据的存储结构、数据的运算
////数据操作 : 数据操作是指对于数据库中各种对象的实例，允许对它们执行的操作的集合，
////数据库对数据的操作主要包括查询与更新两项功能，更新包括数据的插人、删除和修改。
////数据模型要定义这些操作的确切含义、操作符号操作规则(如优先级别)
////以及实现这些操作的数据库语言。
////完整性约束规则 : 数据的完整性约束规则是指定义数据的约束条件，
////即在给定的数据模型中，规定数据及其联系所具有的制约，
////用以限定符合数据模型的数据库状态以及状态的变化，
////以保证数据的正确、有效和相容。或者说对数据进行语法检查和语义检查。
//////例如，一个人的年龄不会超出0~200的范围，一个人只有唯一的父亲和唯一的母亲，
////每个学生的学号应该是唯一的等。
////
////
////第二题
////下载Java开发工具包(JDK) 
////安装程序:
////访问Oracle官网或其他可信网站下载适合您操作系统的JDK安装程序。
////根据计算机硬件和操作系统选择32位或64位的JDK版本、
////运行安装程序:
////运行JDK安装程序，按照提示进行安装、
////配置Java环境变量:
////在Windows系统的计算机上，需要配置JAVA HOME和PATH环境变量。
////
////
////第三题
////Swing框架常见布局有边界布局
////(BorderLayout) 、流式布局
////(FlowLayout) 、网格布局(GridLayout)
////盒子布局(BoxLayout) 、空布局(null)。
////边界布局(BorderLayout) : 边界布局相当于一个容器，分为东西南北中五个区域。
////每个区域含有部件数不超过一个。并且窗口的控件会自动适配窗口的大小，自动做出改变。
////流式布局(FlowLayout) : 流式布局是内部控件像水流一样，从前到后按顺序水平排列，
////达到容器的宽度时跳转到第二行。
////对齐方式有居中对齐、左对齐、右对齐、控件与容器方向开始边对齐、控件
////与容器方向结束边对齐。
////网格布局(GridLayout) : 网格布局是用虚细线将布局划分为行、列和单元格，
////支持一个控件在行、列上交错排列。也可以自己设置布局中组件的排列方式。
////盒子布局(BoxLayout) : 盒子布局可以在垂直和水平两个方向上摆放组件。
////并且BoxLayout类提供指明组件排列方向的静态常量。
////空布局(null) : 空布局指容器不采用任何布局，通过每个组件的绝对定位进行布局。
////
////
////第四题
////面向对象三大基本特性 : 封装，继承，多态
////封装:
////封装就是把客观事物封装成抽象的类并且类可以把自己的数据和方法只让可信的类
////或者对象操作，对不可信的进行信息隐藏。
////继承:继承是从已有的类中派生出新的类，新的类能吸收已有类的数据属性和行为，
////并能扩展新的能力。
////多态 : 多态是指一个类实例的相同方法在不同情形有不同表现形式
////
////
////
////第五题 
////请说明5种组合选择器并说明每种组合选择器的作用与用法
////(1)多元素选择器
////当多个元素拥有相同的特征时，可以通过多元素选择器的方式来统一定义样式，
////有效地避免样式的重复定义。
////多元素选择器允许一次定义多个选择器的样式，选择器之间使用逗号(，) 隔开。
////(2) 后代选择器
////后代选择器(Descendant Selector) ，
////用于选取某个元素的所有后代元素，后代元素之间用空格隔开。
////(3)子选择器
////子选择器(Child Selectors) 
////用于选取某个元素的直接子元素(间接子元素不适用);
////子选择器元素之间使用大于号(> )隔开
////(4) 相邻兄弟选择器
////相邻兄弟选择器(Adiacent Sibling Selector)
////用于选择紧接在某元素之后的兄弟元素。相邻兄弟选择器元素之间使用加号(+)隔开
////(5)普通兄弟选择器
////普通兄弟选择器(General Sibling Selector)
////是指拥有相同父元素的元素；元素与元素之间不必直接紧随；选择器之间使用波浪号(~)隔开。
////
////
////第六题
////(1)在config.json文件中声明所需要的权限
////(2)使用ohos.app.Context.verifySelfPermission接口
////查询应用是否已被授予该权限。
////如果已被授予权限，可以结束权限申请流程。
////如果未被授予权限，继续执行步骤(3)。
////3)使用canRequestPermission查询是否可动态申请。
////如果不可动态申请，说明已被用户或系统永久禁止授权，可以结束权限申请流程。
////如果可动态申请，使用requestPermissionFrom
////User动态申请权限
////
////第七题
////1、在Java程序出现问题时，首先查看程序运行日志，
////并根据日志信息在可能出现问题的代码行中设置断点。
////2、在设置完断点后使用集成开发环境工具的Debug模式运行Java程序。
////3、当程序运行至代码中设置断点的位置时，程序会自动暂停，此时可以逐行运行程序，
////查看变量的值或继续运行程序到其他断点，
////根据程序运行信息逐一排查代码中可能出现的问题，直至问题成功修复。
////
////
////第八题
////用例1 :
////步骤:
////a.打开网页登录界面。
////b.输入正确的用户名
////c.输入正确的密码。
////d.点击“登录”按钮。
////预期结果 :
////e.成功登录到主页面
////用例2 :
////步骤:
////a.打开网页登录界面
////b.输入错误的用户名
////c.输入正确的密码
////d.点击“登录”按钮
////预期结果 :
////e.显示提示信息“用户名不存在”
////用例3 :
////步骤:
////a.打开网页登录界面。
////b.将用户名和密码字段留空或只输入空格
////c.点击“登录”按钮。
////预期结果 :
////d.显示提示信息“请输入用户名和密码”。
////
////第九题
////布局
////DirectionalLayout : 方向布局 用于将一组组件(Component)按照水平或者垂直方向排布。
////DependentLayout : 依赖布局中每个组件可以指定相对于其他同级组件的位置，
////或相对于父组件的位置。
////StackLayout : 层叠布局直接在屏幕上开辟出 - 块空白的区域，
////添加到这个布局中的视图都是以层叠的方式显示
////TableLayout : 表格布局使用表格的方式划分子组件。
////PositionLayout : 位置布局用于为组件指定特定位置，通过指定组件的绝对位置进行布局
////组件 :
////(1) Text:显示字符串的文本组件
////(2) Button: 按钮组件
////(3) TextField:文本输入框组件
////(4) lmage: 显示图片的组件
////注 : 回答内容中的布局，参考答案中的其中3个即可；
////回答内容中的组件如果正确，但在参考答案以外，均算正确。
//
////enum Sex
////{
////	MALE,
////	FMALE,
////	SECRET
////};
////int main()
////{
////	enum Sex x = MALE;
////printf("%d\n", MALE);
////return 0;
////}
////有值不可被改变   0 1 2
//
//
////#define SQR(x)  x*x
////int main()
////{
////	int s, k = 2, y = 3;
////	s = SQR(k + y);
////	printf("%d\n", s);
////	return 0;
////}
//
////int d = 2;
////fun(int p)
////{
////	int d = 5;
////	d += p++;
////	printf("%d", d);
////}
////void main()
////{
////	int a = 3;
////	fun(a);
////	d += a++;
////	printf("%d\n", d);
////}
//
//main()
//{
//	int j, a[] = { 1,3,5,7,9,11,13,15 }, * p = a + 3;//3
//	for (j = 3; j; j--)
//	{
//		switch (j)
//		{
//		case 1:
//		case 2:printf("%d", *p++);
//			break;
//		case 3:printf("%d", *(--p));
//		}
//	}
//}
//main()
//{
//	int i, p[3][3] = { 1,2,3,4,5,6,7,8,9 }, * p1[3], (*p2)[3];
//	for ( i = 0; i < 3; i++)
//	
//		p1[i] = p[i];
//		p2 = p;
//
//	
//	for ( i = 1; i < 3; i++)
//	
//		printf("%d,%d\n",*(*(p1 + i) + 1) + 1, *(*++p2 + 1) + 1);
//	
//}

//int fs()
//{
//	static int x = 1;
//	x += 3;
//	return x;
//
//}
//void cc()
//{
//	int i, s = 1;
//	for ( i = 3; i >= 1 ; i--)
//	{
//		s *= fs();
//	}
//	printf("%d\n", s);
//}
//
//void main()
//{
//	char s1[20], s2[20];
//	int i;
//	int result;
//	gets(s1);
//	gets(s2);
//	i = 0;
//	while (s1[i] == s2[i]&&s1[i]!='\0')
//	
//		i++;
//	
//	result = s1[i] - s2[i];
//	printf("%d\n", result);
//}

//void main()
//{
//	int a[] = { 6,1,5,2,3,9,10,4,8,7 }, * p = a, * q;
//	int n = 10, max, min;
//	max = min = *p;
//	for (q = p; q < p + n; q++)
//		if (max < *q)
//			max = *q;
//		else if (min > *q)
//			min = *q;
//	printf("max = %d,min = %d\n", max, min);
//}

//int main()
//{
//    int number;
//    scanf("%d", &number);  // 从用户输入中获取要计算的数字
//    int a;  // 储存相对较小的那个因子
//    int sum = 1;  // 后面我们将计算除1之外数字的因子之和，但是1本身也是因子
//    for (a = 2; a <= sqrt(number); a++)
//    {
//        if (number % a == 0)  // 如果发现一个因子
//            sum += a + (number / a);  // 把这个较小的因子和对应的较大的因子都累加到 sum 中
//        if (number % --a == 0)  // 如果一个整数是9，例如有3 * 3 = 9，在上一个式子中，会把3多加一次，所以需要去除
//            sum -= a;
//    }
//    printf("%d", sum);  // 输出因子之和
//    return 0;
//}
// 

//int main()
//{
//	int i = 0;
//	int num;
//	int j;
//	printf("请输入一个正整数：");
//	scanf("%d", &i);
//	while ( i>0)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				++num;
//			}
//			else
//				continue;
//			
//		}
//		printf("%d", num);
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int j;
//
//	printf("请输入一个正整数：");
//	scanf("%d", &i);
//
//	for (j = 1; j < i; j++) {
//		if (i % j == 0) {
//			num += j;
//		}
//	}
//
//	printf("因子之和：%d\n", num);
//
//	return 0;
//}

//int main()
//{
//
//
//int i, a[30] = { 1,1 };
//for (i = 2; i < 30; i++)
//	a[i] = a[i - 1] + a[i - 2];
//for (i = 0; i < 30; i++)
//	printf(" % d, ", a[i]);
//return 0;
//
//}
//这答案我笑了，比较简单的想法，这不是递归，就这么玩是吧


//什么叫递归
//int fibonacci(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}
//
//int main() {
//    int i;
//    printf("斐波那契数列前三十项：\n");
//    for (i = 0; i < 30; i++) {
//        printf("%d ", fibonacci(i));
//    }
//    printf("\n");
//
//    return 0;
//}
// 
// 
// 
//int fibonacci(int n)
//{
//	if (n==0||n==1)
//	{
//		return 1;
//	}
//	else
//		return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int i;
//	printf("斐波那契数列的前三十项：\n");
//	for ( i = 0; i < 30; i++)
//	{
//		printf("%d ", fibonacci(i));
//	}printf("\n");
//	return 0;
//}




//struct Student {
//	int num;
//	char name[20];
//	int score[3];
//}stu[10];
//void score_ave(struct Student s[]);
//void person_ave(struct Student s[]);
//int main()
//{
//
//	int n = 10;
//	for (int i = 0; i < n; i++)
//		scanf("%d%s%d%d%d", &stu[i].num,
//			stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
//	score_ave(stu);
//	person_ave(stu);
//	return 0;
//}
//void score_ave(struct Student s[])
//{
//
//	float n = 10;
//	int m = 3;
//	float score_ave[3];//存储每门课程的平均分
//	for (int j = 0; j < m; j++)
//	{
//		//三门课
//		float sum = 0;
//		for (int i = 0; i < n; i++) //十个学生
//			sum += s[i].score[j]; //同时有 j 和 i，数组套数组，有两个[],找到一个元素
//		score_ave[j] = sum / n;
//	}
//	for (int j = 0; j < m; j++)
//		printf("%.2f ", score_ave[j]);
//	printf("\n");
//}
//void person_ave(struct Student s[])
//{
//	float p_ave[10];
//	float sum;
//	float max = 0;
//	float m = 3;
//	int num;
//	int n = 10;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		//i,十个人
//		sum = 0;//重置一个人的总分
//		for (j = 0; j < m; j++) //j , 三个成绩
//			sum += s[i].score[j];
//			//第i个人的第j个成绩
//			p_ave[i] = sum / m;
//		if (max < p_ave[i])
//			max = p_ave[i];
//            num = i;//更新下标
//	}
//	printf("%d %s %d %d %d", s[num].num, s[num].name,
//		s[num].score[0], s[num].score[1], s[num].score[2]);
//}








//int main()
//{
//	int n = 0;
//	int a[20] = { 1,1,2,3 }; //对数组的前四项赋值
//	for (int i = 4; i < 20; i++) //该数列的前 20 项进行赋值
//		a[i] = a[i - 1] + a[i - 2];//从第三项开始，后项都等于它的前三项之和
//	for (int j = 0; j < 20; j++)
//	{//输出该数组
//		printf("%d\t", a[j]);
//		n++;
//		if (n % 5 == 0)//判断换行，每五个一行
//			printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int a[20] = { 1, 1, 2, 3 }; // 对数组的前四项赋值
//    for (int i = 4; i < 20; i++) { // 该数列的前 20 项进行赋值
//        a[i] = a[i - 1] + a[i - 2]; // 从第三项开始，后项都等于它的前两项之和
//    }
//    for (int j = 19; j >= 0; j--) { // 逆序输出该数组
//        printf("%d\t", a[j]);
//        n++;
//        if (n % 5 == 0) { // 判断换行，每五个一行
//            printf("\n");
//        }
//    }
//    return 0;
//}


//main()
//{
//	char* s = { "abe" };
//	do
//	{
//		printf("%d", *s % 10);
//		++s;
//	} while (*s);
//}
//
//int fun(int m, int n)
//{
//	int r;
//	while (n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	return m;
//}
//main()
//{
//	int x = 100, y = 15;
//	printf("%d ", fun(x, y));
//}

//void main()
//{
//	int digit, number, power, t;
//	printf("Enter an integer:");
//	scanf("%d", &number);
//	number = number < 0 ? -number : number;
//	power = 1;
//	t = number;
//	while (t > 0)
//	{
//		power *= 10;
//		t /= 10;
//	};
//	printf("the digit is:");
//	while (power >= 1)
//	{
//		digit = number / power;
//		printf("%d", digit);
//		number = number % power;
//		power /= 10;
//	}
//}


//#define MIN(x,y)(x)<(y)?x:y
//void main()
//{
//	int i, j, k;
//	i = 10;
//	j = 15;
//	k = 10 * MIN(i, j);
//	printf("%d ", k);
//}

//main()
//{
//
//int k = 0;
//
//
//	do
//	{
//		++k;
//		if (i > 100)
//		{
//			break;
//		}
//	} while (k >= 0);
//}


//main()
//{
//	int n[3][3], i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			n[i][j] = i + j;
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 2; j++)
//			n[i + 1][j + 1] += n[i][j];
//	printf("%d\n", n[i][j]);
//}


//int yue(int a, int b)
//{
//	int w, t;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (b != 0)
//	{
//		w = a % b;
//		a = b;
//		b = w;
//	}
//	return a;
//}
//int bei(int a, int b)
//{
//	return a * b / yue(a, b);
//
//}
//int main()
//{
//
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	c = yue(a, b);//最大公因数
//	d = bei(a, b);//最小公倍数
//	printf("%d\n%d", c, d);
//	return 0;
//}




//int abc(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	return abc(b, a % b);
//}
//int lcm(int a, int b) {
//	return (a * b) / abc(a, b);
//}
//int main() {
//	int a, b;
//	printf("请输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	int greatestCommonDivisor = abc(a, b);
//	int leastCommonMultiple = lcm(a, b);
//
//	printf("最大公因数为：%d\n", greatestCommonDivisor);
//	printf("最小公倍数为：%d\n", leastCommonMultiple);
//
//	return 0;
//}
//abc函数使用了辗转相除法（欧几里得算法）来求解最大公因数。该函数通过递归的方式，
//将较大的数除以较小的数，并取得余数，然后用较小的数和余数继续进行相除，
//依此类推，直到余数为0。最后的除数就是两个数的最大公因数。

//lcm函数使用了最大公因数来求解最小公倍数。利用关系：
//两个整数的最小公倍数等于两个数的乘积除以它们的最大公因数，来计算最小公倍数。

//总体来说，这段代码使用辗转相除法来求解最大公因数，并利用最大公因数求解最小公倍数


//int main()
//{
//	int a, n;
//	int i, m = 0, s = 0;
//	//每一位上的常量，最终的位数
//   //加数，结果。
//	scanf("%d,%d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//
//		m = m + a;
//		s = s + m;
//		m = 10 * m;
//	}
//	printf("%d\n", s);
//	return 0;
//}你说编者水平有限，我真的信了
//
//int main()
//{
//    int a, n;
//    int i, m = 0, s = 0;
//
//    printf("请输入初始加数和相加的次数：\n");
//    scanf("%d %d", &a, &n);
//
//    for (i = 1; i <= n; i++)
//    {   
//        m = m * 10 + a;
//        s += m;
//    }
//
//    printf("最终结果为：%d\n", s);
//
//    return 0;
//}

//void myfun(int j)
//{
//
//	int i;
//	for (i = 2; i <= sqrt(j); i++)
//		if (j % i == 0)
//			printf("NO");
//	printf("YES");
//}
//int main()
//{
//
//int m, n;
//scanf("%d,%d", &m, &n);
//myfun(m + n);
//return 0;
//}




//int main() {
//	char s[50];
//	scanf("%s", s);
//	int len = strlen(s);
//	int top = 0, end = len - 1; //定义两个变量指向开头和末尾
//	while (top < end) {
//		char temp = s[top];
//		s[top] = s[end];
//		s[end] = temp;
//		//一直交换开头和末尾
//		top++;
//		end--;
//	}
//	printf("%s\n", s);
//}





//#define N 3
//int main()
//{
//	int a[N][N], i, j, t, n;
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//
//			for (i = 0; i < N; i++)
//			{
//
//				n = N - 1;
//					for (j = 0; j < N / 2; j++)
//					{
//
//						t = a[i][j]; 
//						a[i][j] = a[i][n]; 
//						a[i][n] = t;
//						n--;
//					}
//			}
//		for (i = 0; i < N; i++)
//			for (j = 0; j < N; j++)
//				printf("%5d", a[i][j]);
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int* p;
//	for (p = a[0] ; p <a[0] +12; p++)
//	{
//		if ((p - a[0]) % 4 == 0)
//			printf("\n");
//	}
//	printf("\n");
//}

//void main()
//{
//	int a = 666;
//	int b = 888;
//	printf("%d", a, b);
//}

//int main()
//{
//	int a[15];
//	int i, j, t;
//	for (i = 0; i < 15; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for (j = 0; j < 14; j++)
//		for (i = 0; i < 14 - j; i++)
//			if (a[i] > a[i + 1])
//			{
//				t = a[i];
//              a[i] = a[i + 1]; 
//              a[i + 1] = t;
//			}
//	for (i = 0; i < 15; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//比较简单的一个题目，通过循环迭代的方式进行冒泡排序。
//下面 我将写一个递归方式的冒泡排序


//void bubbleSort(int a[], int n) {
//    // 基本情况：如果数组长度为1，则已经有序
//    if (n == 1) {
//        return;
//    }
//
//    // 内层循环：一次遍历，将最大值冒泡到末尾
//    for (int i = 0; i < n - 1; i++) {
//        if (a[i] > a[i + 1]) {
//            int temp = a[i];
//            a[i] = a[i + 1];
//            a[i + 1] = temp;
//        }
//    }
//
//    // 递归调用：对前 n-1 个元素进行冒泡排序
//    bubbleSort(a, n - 1);
//}
//
//int main() {
//    int a[15];
//
//    for (int i = 0; i < 15; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    printf("\n");
//
//    bubbleSort(a, 15);
//
//    for (int i = 0; i < 15; i++) {
//        printf("%d ", a[i]);
//    }
//
//    return 0;
//}
//


//void main()
//{
//
//
//	int n;
//	printf("请输入一个正整数:\n");
//	scanf("%d", &n);
//	if (n <= 0)
//		printf("数据有误!\n");
//	else if (n % 5 == 0 && n % 7 == 0)
//		printf("YES!\n");
//	else printf("NO!\n");
//}
//int fun(int x)
//{
//	if (x % 5 == 0 && x % 7 == 0)
//		printf("Yes");
//	else
//		printf("No");
//}
//int main()
//{
//	int i;
//	printf("请输入一个正整数：");
//	scanf("%d", &i);
//	if (i<=0)
//	{
//		printf("不符合要求，请重新输入！");
//	}
//	fun(i);
//	printf("\n");
//}


//我使用是自定义函数，效果是一样的，代码的复用性更高，耦合性更低。

//int main()
//{
//	double f, c;
//	printf("Please input: ");
//	scanf("%lf", &c);
//	f = 9 * (c + 32) / 5.0;
//	printf("%.2f", f);
//	return 0;
//}
//题目中说到键盘输入，我下意识的就用了gets函数。
//其实这是错误的，gets函数只能接受字符串，而不可以接收浮点数
//应该使用scanf函数。


//int main()
//{
//	int a, b, c;
//	char x,aver = 0;
//	printf("请输入abc的值：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (x > 0)
//		aver = a * x * x + b * x + c;
//	else
//	{
//		aver = -(a * x * x + b * x + c);
//	}
//
//		printf("%f", aver);
//
//}
//int sort(int arr[])
//{
//	int s = 1;
//	int sum = 0;
//	int j;
//	for ( j = 0; j < 6; j++)
//	{
//		while (arr[j] > 0)
//		{
//			s *= arr[j];
//			arr[j]--;
//
//		}
//		sum += s;
//	}
//	return sum;
//}
//
//int main()
//{
//	int arr[6];
//	int sum;
//	for (int i = 0; i < 6; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr);
//	printf("%d", sum);
//}

//int main()
//{
//
//	int a, b, c, d;
//	float x1, x2;
//	scanf("%d%d%d", &a, &b, &c);
//	d = b * b - 4 * a * c;
//	if (d >= 0)
//	{
//
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf("x1=%f,x2=%f\n", x1, x2);
//	}
//	else
//		printf("此方程无解");
//}







//void printDigitInEnglish(int digit) {
//    switch (digit) {
//    case 0:
//        printf("Zero ");
//        break;
//    case 1:
//        printf("One ");
//        break;
//    case 2:
//        printf("Two ");
//        break;
//    case 3:
//        printf("Three ");
//        break;
//    case 4:
//        printf("Four ");
//        break;
//    case 5:
//        printf("Five ");
//        break;
//    case 6:
//        printf("Six ");
//        break;
//    case 7:
//        printf("Seven ");
//        break;
//    case 8:
//        printf("Eight ");
//        break;
//    case 9:
//        printf("Nine ");
//        break;
//    default:
//        break;
//    }
//}
//
//void printNumberInEnglish(int num) {
//    if (num < 0) {
//        printf("Negative ");
//        num = -num; // 取绝对值
//    }
//
//    if (num == 0) {
//        printDigitInEnglish(0);
//        return;
//    }
//
//    int reverse = 0;
//    while (num != 0) {
//        int digit = num % 10;
//        reverse = reverse * 10 + digit;
//        num /= 10;
//    }
//
//    while (reverse != 0) {
//        int digit = reverse % 10;
//        printDigitInEnglish(digit);
//        reverse /= 10;
//    }
//}
//
//int main() {
//    int num;
//
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    printf("English representation: ");
//    printNumberInEnglish(num);
//    printf("\n");
//
//    return 0;
//}



//
//float Max = 0, Min = 0; // 全局变量
//
//float average(float array[], int n) {
//    int i;
//    float aver, sum = 0;
//    Max = Min = array[0];
//
//    for (i = 0; i < n; i++) {
//        if (array[i] > Max)
//            Max = array[i];
//        else if (array[i] < Min)
//            Min = array[i];
//        sum += array[i];
//    }
//
//    aver = sum / n;
//    return aver;
//}
//
//int main() {
//    float ave, score[10];
//    int i;
//
//    printf("请输入 10 个学生的成绩：\n");
//    for (i = 0; i < 10; i++) {
//        scanf("%f", &score[i]);
//    }
//
//    ave = average(score, 10);
//
//    printf("max=%.2f\nmin=%.2f\naverage=%.2f", Max, Min, ave);
//
//    return 0;
//}


//main()
//{
//	int i, j;
//	for ( i = 4; i >= 1; i--)
//	{
//		printf("*");
//		for ( j = 1; j < 4-i; j++)
//		
//			printf("*");
//		
//		printf("\n");
//	}
//}



//int main()
//{
//	int a, b, c, i;
//	a = c = 0;
//	for (i = 0; i <= 10; i+=2)
//	{
//		a += i;
//		b = i + 1;
//		c += b;
//	}
//	printf("%d\n", a);
//	printf("%d\n", c - 11);
//
//}
//

//int factorial(int n) {
//    static int result = 1;
//    result = n * result;
//    return result;
//}
//
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 5; i++) {
//        sum += factorial(i);
//    }
//
//    printf("Sum of factorials: %d\n", sum);
//
//    return 0;
//}


//这是一道关于阶乘的题目，运用了一个静态变量来保留上一次阶乘的结果 有点意思


//void main()
//{
//	char ch;
//	int letter = 0, space = 0, digit = 0, other = 0;
//	while ((ch = getchar()) != '\n')
//	{
//
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))letter++;
//		else if (ch >= '0' && ch <= '9') digit++;
//		else if (ch == ' ') space++;
//		else other++;
//
//	}
//	printf("%d,%d,%d,%d", letter, digit, space, other);
//}
// 
// 
// 
//七个评委打分
//int main()
//{
//    float a[10], max, min, sum = 0.0, aver;
//    int i;
//    printf("请输入 7 位评委的给分：\n");
//    for (i = 0; i < 7; i++)
//    {
//
//        scanf("%f", &a[i]);
//
//        if ((a[i] < 0) || (a[i] > 10))
//        {
//
//            printf("成绩输入有误！请确保分数在0 - 10！\n");
//
//            i = -1;
//        }
//    }
//    max = a[0]; 
//    min = a[0];
//    for (i = 0; i < 7; i++)
//    {
//
//        if (max < a[i])
//            max = a[i];
//        if (min > a[i])
//            min = a[i];
//        sum = sum + a[i];
//    }
//        aver = (sum - max - min) / 5;
//    
//    printf("\n 去掉一个最高分：%.4f，", max);
//    printf("去掉一个最低分： % .4f\n", min);
//    printf("该选手最后得分是: % .4f\n", aver);
//}





//int main() {
//	int i, j, k, t = 0;
//	for (i = 1; i <= 9; i++) 
//	{
//		t = 0;
//		//第一次是8个空格
//		while (8 - i >= t) {//打印空格
//			t++;
//			printf("  ");
//		}
//		for (j = 1; j <= i; j++)//打印左半边三角形
//			printf("% d", j);
//		for (k = i - 1; k > 0; k--)//打印右半边三角形
//			printf("% d", k);
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 0; j < 9 - i; j++) {
//            printf("  "); // 输出空格
//        }
//        for (int j = 1; j <= i; j++) { 
//            printf("%d ", j); // 输出左半边三角形
//        }
//        for (int j = i - 1; j > 0; j--) {
//            printf("%d ", j); // 输出右半边三角形，注意这里的 j 从 i - 1 开始递减
//        }
//        printf("\n");
//    }
//    return 0;
//}

//double area(double a, double b, double c)
//{
//
//double s, sarea = -1;
//if (a + b > c && b + c > a && c + a > b)
//{
//
//	s = (a + b + c) / 2;
//	sarea = sqrt(s * (s - a) * (s - b) * (s - c));
//}
//	return sarea;
//
//}
//void main()
//{
//
//double a, b, c, sarea;
//printf("请输入三个数：");
//scanf("%lf%lf%lf", &a, &b, &c);
//sarea = area(a, b, c);
//if (sarea > 0)
//printf("可以构成三角形,其面积为：%.2lf\n", sarea);
//else
//printf("不可以构成三角形\n");
//return 0;
//}


//#include <stdio.h>
//
//// 计算三角形面积的函数
//double areaByBaseAndHeight(double base, double height) {
//    return 0.5 * base * height;
//}
//
//int main() {
//    double base, height, triangleArea;
//
//    printf("请输入三角形的底和高：");
//    scanf("%lf %lf", &base, &height);
//
//    triangleArea = areaByBaseAndHeight(base, height);
//
//    printf("三角形的面积为： %.2f\n", triangleArea);
//
//    return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int i = 1;
//	double s = 1, e = 1;
//	while (1 / s >= 1E-5)
//	{
//
//		s = s * i
//		e = e + 1 / s;
//		i++;
//	}
//	printf("e=%lf\n", e);
//}

//鸡肋鸡肋 弃之可惜 食而无味
//
//
//int main() {
//    int n;
//    float e = 1.0;
//    float factorial = 1.0;
//
//    printf("请输入 n 的值: ");
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        factorial *= i; // 首先计算阶乘
//        e += 1.0 / factorial; // 累加 e 的近似值
//    }
//
//    printf("e 的近似值为: %f\n", e);
//    return 0;
//}

//void main()
//{
//	char* p[] = { "4637","1594" };
//	int i, j;
//	long num = 0;
//	for ( i = 0; i < 2; i++)
//	{
//		j = 0;
//		while (p[i][j]!='\0')
//		{
//			if ((p[i][j] - '0') % 2)
//				num = 10 * num + p[i][j] - '0';
//			j += 2;
//
//		}
//	}
//	printf("%d\n", num);
//}

//void swap(int* x, int* y)
//{
//	int* t;
//	t = x;
//	x = y;
//	y = t;
//}
//void main()
//{
//	int a = 3, b = 5;
//	swap(&a, &b);
//	printf("a = %d,b=%d", a, b);
//}


//int main()
//{
//	int i;
//	int is(int n);
//	for ( i = 0; i < 100; i++)
//	{
//		if (is(i))
//			printf("%d", i);
//	}
//	return 0;
//}
//int is(int n)
//{
//	int i, sum;
//	sum = 0;
//	for ( i = 1; i <= n/2; i++)
//	
//		if (n % i == 0)
//			sum = sum + i;
//		if (sum == n)
//			return 1;
//		else
//			return 0;
//		
//	}
//垃圾题 没有水平


// 计算数列的和
//int sumOfArray(int arr[], int size) {
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int size = 5;
//    int result = sumOfArray(arr, size);
//
//    printf("数列的和为：%d\n", result);
//
//    return 0;
//}
//

//
//
//int main() {
//    char str[] = "World!";
//    int length = strlen(str);
//
//    printf("原始字符串: %s\n", str);
//
//    for (int i = 0; i < length / 2; i++) {
//        char temp = str[i];
//        str[i] = str[length - 1 - i];
//        str[length - 1 - i] = temp;
//    }
//
//    printf("逆序输出字符串：%s\n", str);
//
//    return 0;
//}
//
//
//void main()
//{
//	int a, b, t, i, n;
//	double sum = 0.0;
//	printf("请输入 n：");
//	scanf("%d", &n);
//	a = 2, b = 1;
//	for (i = 1; i <= n; i++)
//	{
//
//		sum = sum + (double)a / b;
//		t = a; a = a + b; b = t;
//	}
//	printf("%f\n", sum);
//}

//void main()
//{
//	int i, p[3][3] = { 1,2,3,4,5,6,7,8,9 }, *p1[3], (*p2)[3];
//	for ( i = 0; i < 3; i++)
//	{
//		p1[i] = p[i];
//	}
//	p2 = p;
//	for ( i = 1; i < 3; i++)
//	{
//		printf("%d,%d\n", *(*(p1 + i) + 1)+1, *(*++p2 + 1) + 1);
//	}
//}

//main()
//{
//	char* s2 = "I love China!", ** s1 = &s2;
//	char* s3, c, * s4="W";
//	s3 = &c;
//	*s3 = 'H';
//	s2 = s2 + 2;
//	printf("%s\t%c\t%s\t%c\n", s2,*s3, s4, **s1);
//}

//int main()
//{
//	int hb, hm, hl, n = 0;
//	for (hb = 0; hb <= 100; hb+=1)
//		for (hm = 0; hm <= 100 - hb; hm += 1) {
//			hl = 100 - hb - hm;
//			if (hb*6+hm*4+hl==200)
//			{
//				n++;
//				printf("hb=%d,hm = %d,hl=%d\n", hm, hb, hl);
//
//			}
//	}
//	printf("n = %d\n", n);
//	return 0;
//}


//这题属于是降维打击了，你不了解原理，根本想不到代码会这样写
//void main()
//{
//	char* p, s[6];
//	int n;
//	p = s;
//	gets(p);
//	n = *p - '0';
//	while (*(++p))
//		n = n * 8 + (*p) - '0';
//	printf("%d\n", n);
//	return 0;
//	
//}
//int fun(int a, int n)
//{
//	int sum = 1;
//	while (n >=  1)
//	{
//		sum *= a;
//		n--;
//	}
//	return sum;
//}
//void main()
//{
//	int i,a, n;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &n);
//	fun(a, n);
//	printf("%d的%d次方为%d", a, n, fun(2,3));
//}


//struct Student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//}stu2[3];
////对stu2正确的操作是
//A.stu2[0].sex = "M"
//B.stu2[1].age = stu2[0].age++;
//C.scanf("%d", stu2[2].num);
//D.scanf("%s", &stu2[1].name);


//void main()
//{
//	int i, b, k = 0;
//	for ( i = 6; i >1 ; i--)
//	{
//		b = i % 3;
//		while (b-- >= 0)
//			k++;
//	}
//	printf("%d,%d", k, b++);
//}

//void fun(int* a, int* b) {
//	int* k;
//	k = a;
//	a = b;
//	b = k;
//}
//void main()
//{
//	int a = 3, b = 6, * x = &a, * y = &b;
//	fun(x, y);
//	printf("%d,%d,%d,%d", a, b, *x, *y);
//} 

//#define N 200
//typedef struct {
//	char name[20], author[10]; int price;
//} Book; 
//void main()
//{
//	int i, j, sum = 0;
//	Book bk[N], t;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s%s%d", bk[i].name, bk[i].author, &bk[i].price);
//		sum += bk[i].price;
//	}
//	for (i = 1; i < N; i++)
//	{
//		for (j = 0; j < N - i; j++)
//		{
//			if (bk[i].price < bk[j + 1].price)
//			{
//				t = bk[j]; bk[j] = bk[j + 1]; bk[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d-%s-%s-%d\n", i + 1, bk[i].name, bk[i].author, bk[i].price);
//		printf("总价格:%d", sum);
//	}
//}

//void main()
//{
//	char a[20] = "AB", b[20] = "LMNP";
//	int i = 0;
//	strcat(a, b);
//	while (a[i++]!='\0')
//	{
//		b[i] = a[i];
//	}
//	puts(b);
//}

//汇编语言程序1
//在内存中有两个区域STR1和STR2，分别放置100个无符号字节数据，STR1的偏移地址为2500H，
// STR2的偏移地址为1400H
//依次比较两区域内容，是否完全相同，若相同，则，BX寄存器内容为0，
//若不同，则BX指向STR1中第一个不相同的字节的地址
//且该字节的内容保留在Al的寄存器中。

/*DATA SEGMENT
       ORG 1400H
       STR2 DB 100 DUP(?)
       ORG 2500H
       STR1 DB 100 DUP(?)
       DATA ENDS
CODE SEGMENT
     ASSUME CS:CODE,DS:DATA
     START:
     MOV AX,DATA
     MOV DS,AX
     LEA BX,STR1
     LEA DI,STR2
     MOV CX,100
     LP:
     MOV AL,[BX]
     CMP AL,[DI]
     JNZ STOP
         INC BX
     INC DI
     LOOP LP
     MOV BX,0
     STOP:MOV AH,4CH
             INT 21H
             CODE ENDS
             END START*/

//int main()
//{
//    int* p;
//    int a[5] = { 4,3,5,6,1 };
//    p = a;
//    printf("%d %d", *p++, (*p)++);
//    return 0;
//}


//struct Student {
//    char name[15];
//    int age;
//
//}stu[5] = { {"dkj", 15}, {"gyug", 16},{"lin",17},{"niu",18} };
//int main()
//{
//   
//    printf("%d %c", stu[2].age, *(stu[3].name + 2));
//}
//int main()
//{
//    char ch[] = { "AB\0ab" };
//    char str[6] = "num";
//  /*  printf("%d", sizeof(ch));
//    printf("%d", strlen(ch));*/
//    printf("%d", sizeof(str));
//}

//int a = 5;
//void fun(int b)
//{
//    static int a = 10;
//    a += b++;
//    printf("%d,", a);
//}
//void main()
//{
//    int c = 20;
//    fun(c);
//    a += c++;
//    printf("%d\n", a);
//}
//#define f(x) x*x
//void main()
//{
//    int i;
//    i = f(4 + 4) / (3 + 3);
//    printf("%d", i);
//    printf("\n");
//       printf("%d\n", i);
//       
//}
/*
DATA SEGMENT
     N DW ?
     S DW ?
DATA ENDS
CODE SEGMENT
    ASSUME:CS:CODE,DS:DATA
START:
      MOV AX,DATA
      MOV DS,AX
      XOR AX,AX
      MOV BX,0
GOON:INC BX
     ADD AX,BX
     CMP AX,1000
     JLE GOON
     MOV N,BX
     MOV S,AX
     INT 21H
CODE ENDS
END START
*/
//int main()
//{
//    int sz;
//    char str[] = { "\'abc\n\0\072"};
//    sz = sizeof(str) / sizeof(str[0]);
//    printf("%d",sz-1);
// 
//}


/*
(1)8255A的方式控制字：10000010B；

CODE SEGMENT
ASSUME CS:CODE
START:
      MOV AL,82H
      MOV DX,303H
      OUT DX,AL

GOON: MOV DX,30H
      IN AL,DX
      TEST AL,1
      JNZ LEFT
      TEST AL,2
      JNZ RIGHT
      JMP GOON
RIGHT:MOV AL,80H
      MOV CX,8
      MOV DX,300H
LP1:    OUT DX,AL
        CALL DELAYS2
        ROR AL,1
        LOOP LP1
LEFT:   MOV AL,01H
        MOV CX,8
        MOV DX,300H
LP2:    OUT DX,AL
        CALL DELAYS2
        ROL AL,1
        LOOP LP2



*/


/*
MOV SI,OFFSET MEM1
MOV DI,OFFSET MEM2
MOV CX,200
NEXT:MOV AL,[SI]
MOV [DI],AL
INC SI
INC DI
DEC CX
JNZ NEXT
HLT
年少懵懂的时候，室友告诉我，爱有四种境界，分别是：
爱上一个人，
爱上一个人，
爱上一个人，
爱上一个人，

汇编程序两个八位无符号数比较
    LEA BX,DATA
    MOV AL,[BX]
    INC BX
    CMP AL,[BX]
    JNZ DONE
    MOV AL,[BX]
DONE:MOV MAX,AL
    HLT


    从4000H开始的单元中放有32个有符号数，要求统计出其中负数的个数，
    并将统计结果存入    BUFFER单元


    XOR DX,DX
    MOV SI,4000H
    MOV CX,20H
AGAIN:MOV AL,[SI]
    INC SI
    TEST AL,80H
    JZ NEXT
    INC DX
    DEC CX
    JNZ AGAIN
    MOV BUFFER,DX

    
*/
/*
LEA SI,DATA
MOV AX,[SI]
SHL AX,1
MOV BX,AX
MOV CL,2
SHL AX,CL
ADD AX,BX
HLT
*/


/*
MOV AX,2000H
MOV DS,AX
MOV AX,6000H
MOV ES,AX
MOV SI,1200H
MOV DI,0
MOV CX,100
CLD
RREP MOVSB
HLT


从键盘上输入字符串“HELLO”，并在串尾加结束标志$
    DATA SEGMENT
    STRING DB 10,0,10 DUP(?)
    DATA ENDS
    ;
    CODE  SEGMENT
    ASSUME:CS:CODE,DS:DATA
    START:MOV AX,DATA
          MOV DS,AX
          LEA DX,STRING
          MOV AX,0AH
          INT 21H
          MOV CL,STRING+1
          XOR CH,CH
          ADD DX,CX
          MOV BX,DX
          MOV BYTE PTR[BX+2],'$'
          MOV AH,4CH
          INT 21H
          CODE ENDS
            END START


            在屏幕上依次显示123ABC

            DATA SEGMENGT
            STR DB '123ABC'
            DATA ENDS
            CODE SEGMENT
                    ASSUME CS:CODE,DS:DATA
            START:MOV AX,DATA
                  MOV DS,AX
                  LEA BX,STR
                  MOV CX,6
            LPP:  MOV AH,2
                  MOV DL,[BX]
                  INC BX
                  INT 21H
                  LOOP LPP
                  MOV AH,4CH
                  INT 21H
            CODE  ENDS
                  END START



                  在屏幕上显示欢迎字符HELLO WORLD！
                  DESC SEGMENT
                  STRING DB 'HELLO WORLD!',0DH,0AH,'$'
                  DESC ENDS
                  CSEG SEGMENT
                        ASSUME CS:CSEG,DS:DSEG
                  START:MOV AX,DSEG
                        MOV DS,AX
                        LEG DX,STRING
                        MOV AH,09H
                        INT 21H
                        MOV AH,4CH
                        INT 21H
                 CSEG  ENDS
                 END START


                 从键盘输入一串字符，在字符串尾部插入$，并显示该字符串



                DATA SEGMENT
                BUFSIZE DB 50
                ACTLEN DB ?
                CHARS DB 50 DUP(20H)
                DATA ENDS
                ;
                CODE SEGMENT
                     ASSUME CS:CODE,DS:DATA
                START:MOV AX,DATA
                      MOV DS,AX
                      MOV DX,OFFSET SUFSIZE
                      MOV AH,0AH
                      INT 21H
                      XOR CX,CX
                      MOV CL,ACTLIEN
                      MOV DX,OFFSET CHARS
                      MOV BX,DX
                      MOV BX,CX
                      MOV BYTE PTR[BX],'$'
                      MOV AX,09H
                      INT 21H
                      MOV AX,4CH
                      INT 21H
                CODE ENDS
                  END START
                  梦为努力浇了水
                  爱在背后往前推
                  当我抬起头才发觉
                  我是不是忘了谁
                  需要从记忆再摸索的人
                  “我喜欢的少女打天上来 她无意掀翻烛火 点燃我双眸盛满的暮色”

                  “我又变回了枯树 你成了另一颗树的春天”

                  编写S=86H*36H-21H的程序，式子中的三个操作数均为无符号数

                  DATA SEGMENT
                  NUM  DB 86H,34H,21H
                  RESULT DW ?
                  DATA ENDS
                  ;
                  CODE SEGMENT
                       ASSUME CS:CODE,DS:DATA
                  START:MOV AX,DATA
                        MOV DS,AX
                        LEA SI,NUM
                        LEA DI,RESULT
                        MOV AL,[SI]
                        MOV BL[SI+1]
                        MUL BL
                        MOV BL,[SI+2]
                        MOV BH,0
                        SUB AX,BX
                        MOV [DI],AX
                        MOV AH,4CH
                        INT 21H
                 CODE ENDS
                      END START
                      "请你务必一而再，再而三，三而不竭，千次万次，
                      毫不犹豫地救自己于人间水火。"


                      内存中自TABLE开始的连续16个单元中存放着0~15的平方值（称平方表）
                      查表求DATA中任意数X（0《=x《=15）的平方值，并将结果放在RESULT中。

                      DESC SEGMENT
                      TABLE DB 0,1,4,9,16,25,36,49,
                      64,81,100,121,144,169,196,225
                      DATA DB ?
                      RESULT DB ?
                      DSEG ENDS
                      ;
                      SSEG SEGMENT STACK 'STACK'
                      DB 100 DUP(?)
                      SSEG ENDS
                      ;
                      CSEG  SEGMENT
                            ASSUME CS:CSEG,DS:DSEG,SS:SSEG
                      BEGIN:MOV AX,DSEG
                            MOV AX,DS
                            MOV AX,SSEG
                            MOV SS,AX
                            LEA BX,TABLE
                            MOV AH,0
                            MOV AL,DATA
                            ADD BX,AX
                            MOV AL,[BX]
                            MOV RESULT,AL
                            MOV AH,4CH
                            INT 21H
                    DSEG  ENDS
                          END BEGIN

                          编写程序，将数据区中以BUFFER为首地址的100个字节单元清零。
                          DATA SEGMENT
                          BUFFER DB 100 DUP(?)
                          COUNT DW 100
                          DATA ENDS
                          ;
                          STACK SEGMENT
                                 DW 32 DUP(?)
                          STACK ENDS
                          ;
                          CODE SEGMENT
                               ASSUME CS:CODE,DS:DATA,SS:STACK
                          START:MOV AX,DATA
                                MOV DS,AX
                                MOV AX,STACK
                                MOV SS,AX
                                MOV CX,COUNT
                                LEA BX,BUFFER
                                ADD,CX,BX
                         AGAIN:MOV BYTE PTR [BX],0
                               INC BX
                               CMP BX,CX
                               JB AGAIN
                               MOV AH,4CH
                               INT 21H
                        CODE   ENDS
                               END START



                 把从MEM单元开始的100个16位无符号数按照从大到小的顺序排列


                 DSEG SEGMENT
                 MEM  DW 100 DUP(?)
                 DSEG ENDS
                 ;
                 CSEG SEGMENT
                      ASSUME CS:CSEG,S:DSEG
                    START:MOV AX,DSEG
                          MOV DS,AX
                          LEA DI,MEM
                          MOV BL,99
                          ;外循环体从这里开始
                    NEXT1:MOV SI,DI
                          MOV CL,BL
                          ;以下为内循环
                    NEXT2:MOV AX,[SI]
                          ADD SI,2
                          CMP AX,[SI]
                          JNC NEXT3
                          MOV DX,[SI]
                          MOV [SI-2],DX
                          MOV [SI],AX
                    NEXT3:DEC CL
                          JNZ NEXT2
                          ;内循环到此结束

                          DEC BL
                          JNZ NEXT1
                          ;外循环体结束
                          
                          MOV AH,4CH
                          INT 21H
                    CSEG  ENDS
                          END START

                          从一个字符串中删去一个字符



                          DATA   SEGMENT
                          STRING DB 'Ejbbgiohihjbjk……'
                          LENG   DW $-STRING
                          KEY    DB 'x'
                          DATA   ENDS
                          ;
                          CODE  SEGMENT
                                ASSUME CS:CDDE,DS:DATA,ES:DATA
                          MAIN  PORC FAR
                          START:MOV AX,DATA
                                MOV DS,AX
                                MOV ES,AX
                                LEA BX,STRING
                                LEA CX,LENG
                                PUSH BX
                                PUSH CX
                                MOV AL,KEY
                                CALL DELCHAR
                                MOV AH,4CH
                                INT 21H
                          MAIN  ENDP
                          DELCHAR PROC
                                  PUSH BP
                                  MOV BP,SP
                                  PUSH,SI
                                  PUSH,DI
                                  CLD
                                  MOV SI,[BP+4]
                                  MOV CX,[SI]
                                  MOV DI,[BP+6]
                                  REPNE SCASB
                                  JNE DONE
                                  MOV SI,[BP+4]
                                  DEC WORD PTR[SI]
                                  MOV SI,DI
                                  DEC DI
                                  REP MOVSB
                         DONE:    POP DI
                                  POP SI
                                  POP BP
                                  RET
                         DELCHAR  ENDP
                             CODE ENDS
                                  END START


在数据段中从0500H开始存放着100个有符号数（16位），要求把其中的正数和负数的个数
分别保存在变量RESULT1 RESULT2中

DATA SEGMENT
   ORG 0500H
   BUF DW 100 DUP(?)
   RESULT1 DB 0
   RESULT2 DB 0
DATA ENDS
CODE SEGMENT
     ASSUME CS:CODE,DS:DATA
START:
      MOV AX,DATA
      MOV DS,AX
      LEA BX,BUF
      MOV CX,100
LP:
      MOV AX,[BX]
      CMP AX,0
      JG ZS
      JZ NEXT
      INC RESULT2
      JMP NEXT
ZS:INC RESULT1
NEXT:INC BX
     INC BX
     LOOP LP
STOP:MOV AH,4CH
CODE ENDS
     END START


  编程实现从键盘输入一位数字，
  判断其奇偶性，并在屏幕上输出
  一个标志，若为奇数，则输出1，反之，
  输出0

  CODE SEGMENT
       ASSUME:CS:CODE
 START:MOV AH,01H
       INT 21H
       CMP AL,'0'
       JB STOP
       CMP,AL,'9'
       JA STOP
       TSET AL,01H
       JZ EVEN
       MOV DL,'1'
       JMP DIS
    EVEN:MOV DL,'0'
    DIS: MOV AH,02H
         INT 21H
    STOP:MOV AH,4CH
         INT 21H
    CODE ENDS
         END START



         给x赋初值，满足分段函数Y

         DATA SEGMENT
              Y DB ?
              X DB ?
         DATA ENDS
         CODE SEGMENT
              ASSUME CS:CODE,DS:DATA
         START:
               MOV AX,DATA
               MOV DS,AX
               MOV AL,X
               CMP X,0
               JG  GT
               JZ ET
               SAL AL,1
               JMP STORE
         GT:   MOV CL,2
               SAL AL,CL
               ADD AL,X
               SUB AL,3
               JMP STORE
         ET:   MOV AL,0
         STORE:
               MOV Y,AL
               MOV AH,4CH
               INT 21H
               CODE ENDS
               END START

    实现表达式计算，xyz均为有符号
    8位数，w为16位数，高8位放余数
    低8位存放商

    DATA SEGMENT
         X DB ?
         Y DB ?
         Z DB ?
         W DW ?
    DATA ENDS
    CODE SEGMENT
       ASSUME CS:CODE,DS:DATA
    START:
        MOV AX,DATA
        MOV DS,AX
        MOV AL,X
        MOV BL,5
        IMUL BL
        MOV BX,AX
        MOV AL,Z
        CBW
        SUB BX,AX
        XCHG BX,AX
        MOV BL,Y
        ADD BL,5
        IDIV BL
        MOV W,AX
        MOV AH,4CH
        INT 21H
     CODE ENDS
     END START
  如果年少时没有遇见太过惊艳的人
    该多好.那样便可以在后面的日子
    里可以去慢慢寻找，
    寻找那个温柔了你岁月的人，
    这样可能一生可能都平平淡淡.
    包括你的青春，都没有
    太过惊艳的回忆，
    但是，你的一生可能充满
    了温柔，时光的温柔，
    岁月的温柔。


    输入一系列字符串，
    以$符号结束
    计算数字字符的个数
    DATA SEGMENT 
        COUNT DB 0
    DATA ENDS
    CODE SEGMENT
        ASSUME CS:CODE,DS:DATA
    START:
        MOV AX,DATA
        MOV DS,AX
    NEXT:MOV AH,01H
         INT 21H
         CMP AL,'$'
         JZ  STOP
         CMP AL,'0'
         JB NEXT
         CMP AL,'9'
         JA  NEXT
         INC COUNT
         JMP NEXT
    STOP:MOV AH,4CH
         INC 21H
         CODE ENDS
         END START



         MAX MIN

         DATA SEGMENT
            ORG 2000H
            BUF DB 10 DIP(?)
            MAX DB ?
            MIN DB ?
        DATA ENDS
        CODE SEGMENT
            ASSUME CS:CODE,DS:DATA
        START:
            MOV AX,DATA
            MOV DS,AX
            LEA BX,BUF
            MOV AL,[BX]
            MOV DL,[BX]
            MOV CX,9
            INC BX
        GOON:CMP AL,[BX]
            JG  L1
            MOV AL,[BX]
            JMP LP
        L1: CMP DL,[BX]
            JL LP
            MOV DL,[BX]
        LP: INC BX
            LOOP  GOON
            MOV MAX,AL
            MOV MIN,DL
            MOV AH,4CH
            INT 21H
        GOON ENDS
        END START


        输出一个等式，这tm是人
        能相出来的吗

        CODE SEGMENT
            ASSUME CS:CODE
        START:
            MOV AH,01H
            INT 21H
            SUB AL,30H
            MOV BL,AL
            MOV AH,02H
            MOV DL,'+'
            INT 21H
            MOV AH,01H
            INT 21H
            SUB AL,30H
            ADD AL,BL
            CBW
            MOV BL,10
            DIV BL
            ADD AX,3030H
            MOV BX,AX
            MOV AH,02H
            MOV DL,'='
            INT 21H
            MOV DL,BL
            INT 21H
            MOV DL,BH
            INT 21H
            MOV DL,0DH
            INT 21H
            MOV DL,0AH
            INT 21H
            MOV AH,4CH
            INT 21H
        CODE ENDS


        统计一个16位无符号
        二进制数的1的个数
        存储在NUM

        DATA SEGMENT
            X DW ?
            NUM DB 0
        DATA ENDS
        CODE SEGMENT
            ASSUME CS:CODE,DS:DATA
        START:
            MOV AX,DATA
            MOV DS,AX
            MOV AX,X
            MOV BL,0
            MOV CX,16
        LP: SHR AX,1
              JNC NEXT
              INC BL
        NEXT:LOOP LP
             MOV NUM,BL
             MOV AH,4CH
             INT 21H
        CODE ENDS



        DATA SEGMENT
            VAR1 DD 12345678H
            VAR2 DD 9ABCDEF0H
            VAR3 DD ?
        DATA ENDS
        CODE SEGMENT
            ASSUME CS:CODE,DS:DATA
        START:
            MOV AX,DATA
            MOV DS,AX
        NEXT:
        MOV AX,WORD PTR VAR1
        ADD AX,WORD PTR VAR2
        MOV WORD PTR VAR3,AX
        MOV AX,WORD PTR VAR1+2
        ADC AX,WORD PTR VAR+2
        MOV WORD PTR VAR3,AX
        STOP:MOV AH,4CH
             INT 21H
        CODE ENDS
        END START




    DATA SEGMENT
        BUF DW 100 DUP(?)
            WORDSUM DW 0
            STRHDB 'OWERFLOW$'
    DATA ENDS
    CODE SEGMENT
        ASSUME CS:CODE,DS:DATA
    START:MOV AX,DATA
          MOV DS,AX
          LEA BX,BUF
          MOV CX,100
            XOR AX,AX
    LP:ADD AX,[BX]
        JC DIS
        INC BX
        INC BX
        LOOP LP
        MOV WOEDSUM,AX
        JMP STOP
    DIS:MOV AH,09H
        LEA DX,STR
        INT 21H
    STOP:MOV AH,4CH
         INT 21H
    CODE ENDS
    END
    、


    MOV CH 100H
    LEA BX,ARRAY
    XOR DX,DX
LP: MOV AL,[BX]
    CMP AL,42H
    JG L1
    JL L2
    JMP L3
L1: INC DH
    JMP L3
L2:INC DL
L3:INC BX
    LOOP LP
    MOV UP,DH
    MOV DOWN,DL



    DATA SEGMENT
        ARRAY DW 34H,12H,0FEH
        FLAG DB 0
    DATA ENDS
    CODE SEGMENT
        ASSUME CS:CODE,DS:DATA
    START:MOV AX,DATA
          MOV DS,AX
          LEA BX,ARRAY
          MOV AX,[BX]
          MOV CX,[BX+2]
          MOV DX,[BX+4]
          CMP AX,DX
          JZ L1
          MOV FLAG,0
          JMP STOP
    L2:CMP AX,DX
       JNZ L1
       MOV FLAG,2
       JMP STOP
    L1:MOV FLAG,1
    STOP:MOV AH,4CH
         INT 21H
    CODE ENDS
    END START








  CODE SEGMENT
    ASSUME CS:CODE
  START:
    MOV CH,4
  GOON:
    MOV CL,4
    ROL BX,CL
    MOV AL,BL
    AND AL,OFH
    ADD AL,30H
    CMP AL,3AH
    JL PRINT
    ADD AL,7H
PRINT:
    MOV DL,AL
    MOV AH,2
    INT 21H
    DEC CH
    JNZ GOON
    MOV AH,4CH
    INT 21H
    CODE ENDS
    END START
            
            */

//int main()
//{
//    char str[] = { "ABC/0123" };
//    printf("%d", sizeof(str));
//}
//int main()
//{
//    char* s = "\ta\018bc";
//    while (*s)
//    {
//        s++;
//        printf("*");
//    }
//}

//int main()
//{
//    int a;
//    char c;
//    scanf("%d %c", &a, &c);
//    printf("%d%c", a, c);
//}

//int main()
//{
//    int i, c;
//    char s[2][5] = { "2876","4187" };
//    for ( i = 3; i >= 0; i--)
//    {
//        c = s[0][i] + s[1][i] - 2 * '0';
//        s[0][i] = c % 10 + '0';
//    }
//    puts(s[0]);
//}
//
//int main()
//{
//    int a;
//    char b;
//    scanf("%c%d", &b, &a);
//    printf("%c %d", b, a);
//}
//int fun(int x, int y);
//void main()
//{
//    char s[] = "abaacada", * p, * q, ch = 'a';
//    int n = 0;
//    for (p=q=s;*p!='\0'; p++)
//        while (*q)
//        {
//            if (*q == ch) 
//            {
//                n++;
//                if (n == 4)
//                {
//                    while (p >= q)
//                        *(p + 1) = *p--;
//                    *q = 'H';
//                    break;
//                }
//                }
//            q++;
//            }
//    printf("%s", s);
//        }
//int fun(int x, int y);
//void main()
//{
//    char s[] = "abaacada", * p, * q, ch = 'a';
//    int n = 0;
//    for (p = q = s; *p != '\0'; p++)
//        while (*q)
//        {
//            if (*q == ch)
//            {
//                n++;
//                if (n == 4)
//                {
//                    while (p >= q)
//                        *(p + 1) = *p--;
//                    *q = 'H';
//                    break;
//                }
//            }
//            q++;
//        }
//    printf("%s", s);
//}
//
//int fun(int x, int y)
//{
//    static int k;
//
//    x = x + y;
//    y += x;
//    k += x - y;
//    return k;
//}
//
//void main()
//{
//    int x = 3, y = 5;
//    int max = 0;
//    int min = 0;
//    max = fun(x, y);
//    min = fun(x, y);
//    printf("%d,%d", max, min);
//}

//void main()
//{
//    int i, b, k = 0;
//    for ( i = 6; i > 1; i--)
//    {
//        b = i % 3;
//        while (b-- >= 0)
//
//            k++;
//        
//    }
//    printf("%d,%d", k, b++);
//}原谅我 这一首不为谁而作的歌

//int main()
//{
//    char ch[3][10] = { "good","bad","zoo" }, * p;
//    int i;
//    p = ch[0];
//    for (i = 1; i < 3; i++)
//    {
//        if (strcmp(p, ch[i]) < 0)
//            p = ch[i];
//    }
//        printf("%s\n", p);
//    
//}

//int main()
//{
//    char str[][20] = { "hello","beijing" };
//    char* p = str[0];
//    printf("%d\n", strlen(p + 20));
//}
//int main()
//{
//    int i, k = 0;
//    char a[80] = "abcABCxyz", b[80], * p;
//    p = a;
//    while (*p)
//    {
//        for (i = 0; i <= 3 && *p; p++, k++, i++)
//            b[k] = *p;
//        if (*p)
//        {
//            b[k] = '#';
//            k++;
//        }
//    }
//        b[k] = '\0';
//        puts(b);
//    
//}
//#include <stdio.h>
//
//#define N 30
//
//typedef struct {
//    char name[10];
//    int c1;
//    int c2;
//} Stu;
//
//int main() {
//    Stu s[N];
//    int i, mc1 = 0, mc2 = 0;
//
//    // 输入学生信息并记录最高分
//    for (i = 0; i < N; i++) {
//        scanf("%s%d%d", s[i].name, &s[i].c1, &s[i].c2);
//        if (mc1 < s[i].c1) {
//            mc1 = s[i].c1;
//        }
//        if (mc2 < s[i].c2) {
//            mc2 = s[i].c2;
//        }
//    }
//
//    // 打印课程c1的最高分及对应学生
//    printf("课程c1的最高分是 %d，分别是：\n", mc1);
//    for (i = 0; i < N; i++) {
//        if (s[i].c1 == mc1) {
//            printf("%s\n", s[i].name);
//        }
//    }
//
//    // 打印课程c2的最高分及对应学生
//    printf("课程c2的最高分是 %d，分别是：\n", mc2);
//    for (i = 0; i < N; i++) {
//        if (s[i].c2 == mc2) {
//            printf("%s\n", s[i].name);
//        }
//    }
//
//    return 0;
//}

//输入30个国家的名字，按字母顺序升序排列输出
//国家名字分行显示
//int main()
//{
//    char ch[30][20], t[20];
//    int i, j;
//    for (i = 0; i < 30; i++)
//        gets(ch[i]);
//    for ( i = 1; i < 30; i++)
//    {
//        for (j = i + 1; j < 30; j++)
//        {
//            if (strcmp(ch[i], ch[j]) > 0)
//            {
//                strcpy(t, ch[i]);
//                strcpy(ch[i], ch[j]);
//                strcpy(ch[i], t);
//            }
//        }
//    }
//    for ( i = 0; i < 5; i++)
//    {
//        puts(ch[i]);
//    }
//}


//用选择法将从键盘上输入的
//10个整数按照升序排序输出，数据间用空格分隔
//要求：为提高程序执行效率，每轮比较
//只进行一次数据交换
//int main()
//{
//    int a[10], i, j, t, k;
//    for ( i = 0; i < 10; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for ( i = 0; i < 10; i++)
//    {
//        k = i;
//
//        for ( j = i+1; j < 10; j++)
//        {
//            if (a[k] > a[j])
//                k = j;

     /*   }
        if (k!=i)
        {
            t = a[k];
            a[k] = a[i];
            a[i] = t;

        }
    }
    for ( i = 0; i < 10; i++)
    {*/
      /*  printf("%d", a[i]);
    }
}*/
//键盘输入一串字符串序列，希望字符串
//逆序存放并输出逆序串

//int main()
//{
//    char ch[100], * p1, * p2, c;
//    gets(ch);
//    p1 = p2 = ch;
//    while (*p2)
//    {
//        p2++;
//    }
//    p2--;
//    while (p1 < p2)
//    {
//        c = *p1;
//        *p1 = *p2;
//        *p2 = c;
//        p1++, p2--;
//    }
//    puts(ch);
//}




//某产品销售公司的支援数据包括职员姓名和年度销量
//2部分，下面程序实现该公司全部职员数据的录入
//并输出年销量最差的所有职员的姓名（多人则用空格分隔）

//#define N 40
//void input(Emp* p, int n)
//{
//    int i;
//    for ( i = 0; i < n; i++)
//    {
//        scanf("%s%d", p[i].name, &p[i].num);
//    }
//    int qmin(Emp * p, int n)
//    {
//        int min = p[0].num, i;
//        for ( i = 1; i < n; i++)
//        {
//            if (min > p[i].num)
//                min = p[i].num;
//        }
//        return min;
//    }
//    void output(Emp* p, int n, int min)
//    {
//        int i;
//        for ( i = 0; i < n; i++)
//        {
//            if (min == p[i].num)
//                printf("%s".p[i].name);
//        }
//    }
//}
//typedef struct { char name[10]; int num; }Emp;
//int main()
//{
//    Emp a[N];
//    int i, min;
//    input(a, N);
//    min = qmin(a, N);
//    output(a, N, min);
//
//}


//int main()
//{
//    int i = 10;
//    switch (i+1)
//    {
//    case 9:i++;
//    case 10:i++; break;
//    case 11:i++;
//
//
//    default:i++; break;
//        break;
//    }
//    printf("%d", i);
//}



//int main()
//{
//    char s[] = "student", * p1, * p2,c;
//    p1 = p2 = c;
//    while (*p2)
//    {
//        p2++;
//    }
//    p2--;
//    while (p2>p1)
//    {
//        c = *p1;
//        *p1++ = *p2;
//        *p2-- = c;
//    }
//    printf("%s\n", s);
//}


//#include <stdio.h>
//
//int main() {
//    char s[] = "student";
//    char* p1, * p2;
//    char c;
//    p1 = s;
//    p2 = s;
//    while (*p2) {
//        p2++;
//    }
//    p2--;
//    while (p2 > p1) {
//        c = *p1;
//        *p1++ = *p2;
//        *p2-- = c;
//    }
//    printf("%s\n", s);
//    return 0;
//}

//int main()
//{
//    int a[10] = { 1,2,3,4,3,5,15 };
//    int n = 0;
//    int i, j, c, k;
//    for (i = 0; i < 10 - n; i++)
//    {
//        c = a[i];
//        for (j = i + 1; j < 10 - n; j++)
//            if (a[j] == c)
//            {
//                for (k = j; k < 10 - n; k++)
//                    a[k] = a[k + 1];
//                n++;
//
//            }
//    }
//    for (i = 0; i < 10 - n; i++)
//    {
//        printf("%3d", a[i]);
//    }
//}


//int main()
//{
//    char s[] = "morning", * p1, * p2, c;
//    p1 = p2 = s;
//    while (*p2)
//    {
//        p2++;
//    }
//    p2--;
//    while (p2>p1)
//    {
//        c = *p1;
//        *p1++ = *p2--;
//        *p2 = c;
//    }
//    printf("%s", s);
//}

//#define N 6
//void input(int(*p)[N], int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n; j++)
//            scanf("%d", &p[i][j]);
//}
//int min(int(*p)[N], int n)
//{
//    int min = p[0][0], i, j;
//    for ( i = 0; i < n; i++)
//    {
//        for(j=0;j<n;j++)
//            if (min>p[i][j])
//            {
//                min = p[i][j];
//            }
//    }
//    return min;
//}
//
//int main()
//{
//    int b[N][N];
//    input(b, N);
//    printf("最小值为%d", min(b, N));
//}
//在交换最小值的时候，需要有一个中间变量

//#define N 100
//typedef struct {
//    char name[20];
//    int num;
//    float life;
//}Country;
//int main()
//{
//    Country cts[5], t;
//    int i, j;
//    for (i = 0; i < N; i++)
//        scanf("%s%d%f", cts[i].name, &cts[i].num, &cts[i].life);
//    for ( i = 0; i < N; i++)
//    {
//        for (j = 0; j < N - i; j++) {
//            if (strcmp(cts[j].name,cts[j+1].name)<0)
//
//            {
//                t = cts[j];
//                cts[j] = cts[j + 1];
//                cts[j + 1] = t;
//            }
//        }
//    }
//    for ( i = 0; i < N; i++)
//    {
//        printf("%s国人口%d,平均寿命:%.2f\n", cts[i].name, cts[i].num, cts[i].life);
//
//    }
//}

//int main()
//{
//    printf("%s", "hello\dkcwemc\n");
//}
//void fun1(char* p)
//{
//    char* q = p;
//    while (*q!='\0')
//    {
//        (*q)++;
//        q++;
//    }
//}
//int main()
//{
//    char a[] = { "Program" }, * p;
//    p = &a[3];
//    fun1(p);
//    printf("%s\n", a);
//}


//struct 
//{
//    char name[20];
//    int score;
//}stus[10];
////当stu已经录入数据，要求输出
////score低于60的name成员，
////下列写法错误的是
////A.
//for ( i = 0; i < 10; i++)
//{
//    if (stu[i].score < 60)
//        puts(stu[i].name);
//
//    
//}
////B
//for ( i = 0; i < 10; i++)
//{
//    if (stu->score < 60)
//        puts(stu->name);
//}
////C
//for ( i = 0; i < 10; i++)
//{
//    if ((*(stu + i)).score < 60)
//        puts((*(stu + i)).name);
//}
//
////D
//for ( i = 0; i < 10; i++)
//{
//    if ((stu + i)->score < 60)
//        puts((stu + i)->name);
//}
//
////一个字符串求长的函数
//int stringlengt(char* str)
//{
//    char* p;
//    p = str;
//    while (*p)
//    {
//        p++;
//    }
//    return *p - str;
//}

//#define N 30
//typedef struct {
//    int num;
//    char num[10];
//    char gender;
//}Person;
//int fun(Person* pn, int m)
//{
//    int i, n = 0;
//    for ( i = 0; i < m; pn++)
//    {
//        if (pn->gender == 'M')
//            n++;
//    }
//    return n;
//}
//int main()
//{
//    Person ps[N];
//    int n;
//    n = fun(ps, N);
//    printf("n=%d\n", n);
//}
//int main()
//{
//    int x = 5, y;
//    y = 2 + (x += x++, x + 8, ++x);
//    printf("%d", y);
//}
//int main()
//{
//    double x;
//    x = 218.82631;
//    printf("%-6.2e\n", x);
//}
//int main()
//{
//    char* st = "how are you"
//        //下列程序段正确的是
//        //A.
//        char a[11], * p;
//    strcpy(p = a + 1, &st[4]);
//    //B.
//    char a[11];
//    strcpy(++a, st);
//
//    //C
//    char a[11];
//    strcpy(a, st);
//
//    //D
//    char a[], * p;
//    strcpy(p = &a[1], st + 2);
//}
//char* match(char* s, char ch)
//{
//    while (*s)
//    
//        if (*s == ch)
//            return s;   
//else
//
//    s++;
//
//
//return NULL;
//}
//
//int main()
//{
//    char ch, str[80] = "abc", * p = NULL;
//    while ((ch=getchar())!='\n')
//    {
//        if ((p = match(str, ch)))
//        {
//            printf("%s\n", p);
//        }
//        else
//        {
//            printf("Not Found\n");
//        }
//    }
//}


//#include <stdio.h>
//
//void sort(int a[], int n)
//{
//    int i, j, k, t;
//    for (i = 0; i < n - 1; i++)
//    {
//        k = i;
//        for (j = i + 1; j < n; j++)
//        {
//            if (a[i] > a[j])  // 找到比当前最小值还小的元素
//                k = j;
//        }
//        t = a[k];
//        a[k] = a[i];
//        a[i] = t;
//    }
//}
//
//int main()
//{
//    int arr[] = { 1, 4, 8, 9, 7, 41, 56 };
//    int i;
//    sort(arr, 7);
//    for (i = 0; i < 7; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

//struct ord { int x, y; }dt[2] = { 1,2,3 };
//int main()
//{
//    struct ord* p = dt + 1;
//    printf("%d", ++p->y);
//    printf("%d\n", p->y++);
//}
   /* int a, x = 2;
    a = x > 0 ? 3 * x : x = 10;*/

    /*int a[3][2] = { 1,2,3,4,5,6 }, (*p)[2] = a + 1;

    printf("%d\n", *p[1]+1);*/


//int main()
//{
//    float f1, f2;
//    //scanf("%f%f", &f1, &f2);
//    //scanf("%f,%f", &f1, &f2);
//    scanf("%3.2f%2.1f", &f1, &f2);
//
//    printf("%f%f", f1, f2);
//}

//int main()
//{
//    int a;
//    char c;
//    scanf("%d%c", &a, &c);
//    printf("%d%c", a, c);
//}



#define SIZE 20
#define GAP 4

int main() {
    int f[SIZE * GAP];
    f[0] = 0;
    f[GAP] = 1;

    // 生成斐波那契数列
    for (int i = 2; i < SIZE; i++) {
        f[i * GAP] = f[(i - 1) * GAP] + f[(i - 2) * GAP];
    }

    // 打印每个元素的地址和值
    for (int i = 0; i < SIZE; i++) {
        printf("Address: %p, Value: %d\n", (void*)&f[i * GAP], f[i * GAP]);
    }

    return 0;
}