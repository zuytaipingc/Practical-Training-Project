#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
int main()
{
	char a[30] = "Think in Java";
	char b[30] = "C programming language";
	char c[30] = "Data Structure";
	char d[30] = "A Write\'s Reference";
	char e[30] = "English in use";
	char* index[5];
	index[0] = a;//指针 地址变量=字符数组首地址
	index[1] = b;
	index[2] = c;
	index[3] = d;
	index[4] = e;
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("%s_%c \n", index[i], *index[i]);
		//*index[i]是每本的首字符，index是书名首地址代表全部书名

	}
	for (i = 0; i < 4; i++)//冒泡排序外循环，是跑几趟的轮数
	{
		for (j = 0; j < 4 - i; j++)//两两比较 数大的往后移动
		{


			if (*index[j] > *index[j + 1]) {
				char* temp;
				temp = index[j];
				index[j] = index[j + 1];
				index[j + 1] = temp;
			}
		}
	}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define SIZE 20
//// 修改 GAP 为 1
//#define GAP 1
//
//int main() {
//    int fibonacci[SIZE * GAP];
//    // 初始化前三项
//    fibonacci[0] = 1;
//    fibonacci[GAP] = 0;
//    fibonacci[2 * GAP] = 2;
//
//    // 生成斐波那契数列
//    for (int i = 3; i < SIZE; i++) {
//        fibonacci[i * GAP] = fibonacci[(i - 1) * GAP] + fibonacci[(i - 2) * GAP] + fibonacci[(i - 3) * GAP];
//    }
//
//    // 打印每个元素的地址和值
//    for (int i = 0; i < SIZE; i++) {
//        printf("Address: %p, Value: %d\n", (void*)&fibonacci[i * GAP], fibonacci[i * GAP]);
//    }
//
//    return 0;
//}




//#define SIZE 20
////地址间隔为 8 字节
//#define GAP 1
//
//int main() {
//    // 定义数组用于存储阶乘结果，考虑间隔，大小为 SIZE * GAP
//    unsigned long long factorial[SIZE * GAP];
//    // 初始化 0 的阶乘为 1
//    factorial[0] = 1;
//
//    // 生成 1 到 20 的阶乘并存储到数组中，按照间隔 GAP 存储
//    for (int i = 1; i < SIZE; i++) {
//        factorial[i * GAP] = factorial[(i - 1) * GAP] * (i + 1);
//    }
//
//    // 打印每个元素的地址和值
//    for (int i = 0; i < SIZE; i++) {
//        printf("Address: %p, Value: %llu\n", (void*)&factorial[i * GAP], factorial[i * GAP]);
//    }
//
//    return 0;
//}