#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <math.h>
//2023拜课网C语言课程模拟卷 （一）
//#define S 3.14
//#include <stdio.h>
//
//int main()
//{
//	float r = 0;
//	float area, per;
//	scanf("%f", &r);
//	area = S * r * r;
//	per = 2 * S * r;
//	printf("%f\n", area);
//	printf("%f\n", per);
//	return 0;
//}
//代码的问题还是有滴，但是逻辑上已经没有问题了，还要继续完善代码的质量，不能图快。
//在scanf函数中使用%f格式化字符来读取浮点数，但是在格式化字符串中添加了一个换行符\n。这样做会导致scanf在等待输入时会忽略掉输入中的空白符（包括换行符），因此在输入时要多注意。

//#define pi 3.14159
//#include <stdio.h>
//void main()
//{
//
//	float r, length, area;
//	printf("input r:");
//	scanf("%f", &r);
//	length = 2 * pi * r;
//	area = pi * r * r;
//	printf("length is %5.2f\n area is %5.2f\n", length, area);
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 7;
//	float x = 2.5;
//	float y = 4.7;
//	x = x + a % 2 * (int)(x + y) % 2 / 4;
//	printf("%f\n", x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double x; double y;
//	int a; double b;
//	x = 2.5;
//	y = 4.7;
//	a = 7;
//	b = x + a % (int)(x + y) % 2 / 4;
//	printf("表达式的值为: % f", b);
//	return 0;
//}

//现在的代码还是要注意细节问题，因为有的时候，不添加一些新的变量会导致代码内容混乱，
//所以在标准代码里面它新定义了一个b，而我直接用的题目中的x，虽然结果是一样的，但是还是有一些
//不必要的问题出现。
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0 || a % 100 != 0 && a % 400 == 0)
//		printf("%d是闰年",a);
//	else 
//		printf("%d不是闰年",a);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int year, leap;
//	printf("请输入年份:");
//	scanf("%d", &year);
//	if (year % 40) {
//		if (year % 1000) {
//			if (year % 400 == 0) {
//				leap = 1;
//			}
//			else {
//				leap = 0;
//			}
//		}
//		else {
//			leap = 1;
//		}
//	}
//	else {
//		leap = 0;
//	}
//	if (leap)
//		printf("%d 是 ",year);
//	else printf(" %d 不是",year);
//		printf("闰年\n");
//	return 0;
//}

//程序阅读题的2.当运行以下程序时，输入abcd，程序的输出结果是

//这道题挺完蛋的，到现在我也没看出正确答案，给的答案真的是对的吗？
//insert(char str[])
//{
//	int i;
//	i = strlen(str);
//	while (i > 0)
//	{
//		str[2 * i] = str[i];
//		str[2 * i - 1] = '*';
//		i--;
//	}
//	printf("%s\n", str);
//}
//main()
//{
//	char str[40];
//	scanf("%s", str);
//	insert(str);
//
//}
//3.
//fun(int t[], int n)
//{
//	int i, m;
//	if (n == 1)
//		return t[0];
//	else if (n >= 2)
//	{
//		m = fun(t, n - 1);
//		return m;
//	}
//}
//
//main()
//{
//	int a[] = { 11,4,6,3,8,2,3,5,9,2 };
//	printf("%d\n", fun(a, 10));
//}
//程序填空题
//fun(int* a, int n)
//{
//	int i, j = 0, p;
//	p = j;
//	for ( i = 0; i < n; i++)
//	
//		if (a[i] < a[p]) 
//			a[p] = a[i];
//
//		
//	return(p);
//}
//main()
//{
//
//	return 0;
//}

//2.计算数组中元素的平均值
//main()
//{
//	float average(int a[]);//函数声明
//	int a[10];
//	float aver;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		aver = average(a);
//		printf("average is %6.2f", aver);
//	}
//	float average(int a[])
//	{
//		int sum = 0,i;
//		float aver;
//		for ( i = 0; i < 10; i++)
//		
//			sum += a[i]; 
//			aver = sun / 10;
//		
//		return aver;
//	}
//	
//}

//3.函数main（）的功能是在带头结点的单链表中查找数据域中值最小的节点。
//struct  node
//{
//	
//		int data;
//		struct node* next;
//	
//};
//int min(struct  node *first) //指针first为链表头指针
//{
//	strct node* p;
//	int m;
//	p = first->next;
//	m = p->data;
//	p = p->next;
//	for (; p != NULL; p = p->next)
//		if (p->data < m)
//			m = p->data;
//	return m;
//		
//};
//链表操作，首先要明确链表的第一个地址（指针），链表的头结点是一个特殊的节点，
//它不存储数据，只是用来方便链表操作的。
//真正存储数据的是头结点的下一个节点。
// 这是第一张卷子，还可以吧，难题不是很多，勾起了我一些知识的回忆。



//课程模拟卷（二）
//struct data
//{
//	int i;
//	char ch;
//	double f;
//
//}b;
//#define SQR(x)  x*x
//int main()
//{
//	int s, k = 2, y = 3;
//	s = SQR(k + y);
//	printf("%d\n", s);
//	return 0;
//}

//程序阅读题 2.

//#include <stdio.h>
//
//int d = 2;
//
//void fun(int p)
//{
//    int d = 5;
//    d += p++;
//    printf("%d\n", d);
//}
//
//int main()
//{
//    int a = 3;
//    fun(a);
//    d += a++;
//    printf("%d\n", d);
//
//    return 0;
//}
//typedf struct
//{
//	char name[9];
//	chae sex;
//	float score[2];
//}STU;
//void f(STU a)
//{
//	STU b = { "zhang",'m',85.0,90.0 };
//	int i;
//	strcpy(a.name, b.name);
//	a.sex = b.sex;
//	for ( i = 0; i < 2; i++)
//	{
//		a.score[i] = b.score[i];
//	}
//}
//main()
//{
//	STU c = { "Qian",'f',95.0,92.0 };
//	f(c);
//	printf("%s%c%2.0f%2.0f\n", c.name, c.sex, c.score[0], c.scoure[1]);
//}

//main()
//{
//	char* s = "Beijing ligong daxue";
//	int i, j;
//	for(i = j = 0; s[i] != '\0'; i++)
//	if(s[i] != ' ')
//		s[j++] = s[i];
//	else
//		s[j] = s[i];
//	s[j] = '\0';
//	printf("%s", s);
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
//	n++;
//	if (n % 5 == 0)//判断换行，每五个一行
//		printf("\n");
//}
//return 0;
// }

//int main()
//{
//	float a[10], max, min, sum = 0.0, aver;
//	int i;
//	printf("请输入 7 位评委的给分：\n");
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%f", &a[i]);
//		if ((a[i] < 0) || (a[i] > 10))
//		{
//
//			
//			printf("成绩输入有误！请确保分数在0 - 10！\n");
//			i = -1;
//		}
//	}
//	
//	max = a[0]; 
//	min = a[0];
//	for (i = 0; i < 7; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//		sum = sum + a[i];
//	}
//	
//aver = (sum - max - min) / 5;
//printf("\n 去掉一个最高分：%.4f，", max);
//printf("去掉一个最低分:% .4f\n", min);
//printf("该选手最后得分是: % .4f\n",aver);
//}

////若有定义，
//int a = 1, b = 2;
//float x = 3, w;
////则合法的Switch语句是
//switch (a)
//{
//case 1:w = a / b;
//	break;
//case 2:w = a % b;
//	break;
//
//}
//
//
//switch (b)
//{
//case 1:z = a % b;
//case 2:z = a / b;
//	break;
//}
//
//switch (x)
//{
//case 2:w = a % b;
//	break;
//case 1:w = a / b;
//	break;
//
//}
//
//switch (a+b)
//{
//case 3:
//case 2:w = a % b;
//	break;
//	
//}
//
////能正确进行字符串操作的语句是
//char a[10] = { 'A','B','C','D','\0'};
//char a[10]; a = "ABCDE";
//char* p; *p = "ABCDE";
//char* s; scanf("%d", s);

//struct person {
//	char title[20];
//	int code;
//}; struct person book[5] = { "Physics",17,"Math",18,"English",20,"History",18 };
//
//printf("%c", book[0].title[1]);
//printf("%c", book[1].title[4]);
//printf("%c", book[2].title[7]);
//printf("%c", book[3].title[6]);
////若有说明int *p,m = 5,n;
// 
//以下正确的程序段是
//p = &n; scanf("%d", n);
//p = &n; scanf("%d", *p);
//scanf("%d", &n); p = n;
//p = &n; *p = n;
//




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

