//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <iostream>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char a[30] = "Think in Java";
//	char b[30] = "C programming language";
//	char c[30] = "Data Structure";
//	char d[30] = "A Write\'s Reference";
//	char e[30] = "English in use";
//	char* index[5];
//	index[0] = a;//指针 地址变量=字符数组首地址
//	index[1] = b;
//	index[2] = c;
//	index[3] = d;
//	index[4] = e;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s_%c \n", index[i], *index[i]);
//		//*index[i]是每本的首字符，index是书名首地址代表全部书名
//
//	}
//	for (i = 0; i < 4; i++)//冒泡排序外循环，是跑几趟的轮数
//	{
//		for (j = 0; j < 4 - i; j++)//两两比较 数大的往后移动
//		{
//
//
//			if (*index[j] > *index[j + 1]) {
//				char* temp;
//				temp = index[j];
//				index[j] = index[j + 1];
//				index[j + 1] = temp;
//			}
//		}
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++) {
//		printf("%s_%c\n", index[i], *index[i]);
//	}
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

 //封装冒泡排序函数
void bubbleSort(char* index[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*index[j] > *index[j + 1]) {
                char* temp;
                temp = index[j];
                index[j] = index[j + 1];
                index[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i = 0;
    char a[30] = "Think in Java";
    char b[30] = "C programming language";
    char c[30] = "Data Structure";
    char d[30] = "A Write\'s Reference";
    char e[30] = "English in use";
    char* index[5];
    index[0] = a;
    index[1] = b;
    index[2] = c;
    index[3] = d;
    index[4] = e;

    for (i = 0; i < 5; i++) {
        printf("%s_%c \n", index[i], *index[i]);
    }

    // 调用封装的冒泡排序函数
    bubbleSort(index, 5);

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%s_%c\n", index[i], *index[i]);
    }

    return 0;
}

// 202548del.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//int bookname()
//{
//	//数组名a,b,c,d,e是首地址
//	char a[30] = "Think in Java";
//	char b[30] = "C programming language";
//	char c[30] = "Data Structure";
//	char d[30] = "A Writer\'s Reference";
//	char e[30] = "English in use";
//	printf("%s", a);//数组名可以代表字符串的全部内容
//	char* str[5];//每个数组都是一个地址变量（指针变量）
//	str[0] = a;//存储的是字符串的首地址
//	str[1] = b;
//	str[2] = c;
//	str[3] = d;
//	str[4] = e;
//	int i, j;
//	//str[i]是字符串的全部，*str[i]是字符串的第一个字符
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", str[i]);//
//	}
//	//通过比较*str[i]来排序str[i]
//	//外层循环是跑的趟数
//	for (i = 0; i < 4; i++) {
//		//每趟把最大的数往后移动
//		for (j = 0; j < 5 - 1 - i; j++) {
//			if (*str[j] > *str[j + 1]) {
//				char* temp;
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", str[i]);//
//	}
//	return 0;
//}
//
//int main()
//{
//	char s[11] = "China man";
//	char* p, * q;
//	int i = 0, j;
//	//找不到h往下走
//	while (s[i] && s[i] != 'h') { i++; }
//	//覆盖删除
//	j = i + 1;
//	while (s[j]) {
//		s[j - 1] = s[j];
//		j++;
//	}
//	s[j - 1] = '\0';
//	puts(s);
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

//#include <stdio.h>
//
//// 书籍名称排序函数
//int bookname()
//{
//    // 数组名 a, b, c, d, e 是首地址
//    char a[30] = "Think in Java";
//    char b[30] = "C programming language";
//    char c[30] = "Data Structure";
//    char d[30] = "A Writer's Reference";
//    char e[30] = "English in use";
//    char* str[5]; // 每个数组都是一个地址变量（指针变量）
//    str[0] = a; // 存储的是字符串的首地址
//    str[1] = b;
//    str[2] = c;
//    str[3] = d;
//    str[4] = e;
//    int i, j;
//
//    // 输出未排序的书名
//    for (i = 0; i < 5; i++) {
//        printf("%s\n", str[i]);
//    }
//
//    // 通过比较 *str[i] 来排序 str[i]
//    // 外层循环是跑的趟数
//    for (i = 0; i < 4; i++) {
//        // 每趟把最大的数往后移动
//        for (j = 0; j < 5 - 1 - i; j++) {
//            if (*str[j] > *str[j + 1]) {
//                char* temp;
//                temp = str[j];
//                str[j] = str[j + 1];
//                str[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("\n");
//    // 输出排序后的书名
//    for (i = 0; i < 5; i++) {
//        printf("%s\n", str[i]);
//    }
//    return 0;
//}
//
//int main()
//{
//    char s[11] = "China man";
//    char* p, * q;
//
//    // p 指向原字符串，q 指向新字符串（用于覆盖）
//    p = q = s;
//
//    // 遍历字符串
//    while (*p) {
//        if (*p != 'h') {
//            *q = *p;
//            q++;
//        }
//        p++;
//    }
//
//    // 添加字符串结束符
//    *q = '\0';
//
//    puts(s);
//
//    // 调用书籍名称排序函数
//    bookname();
//
//    return 0;
//}


