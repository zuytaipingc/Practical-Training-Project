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
//	index[0] = a;//ָ�� ��ַ����=�ַ������׵�ַ
//	index[1] = b;
//	index[2] = c;
//	index[3] = d;
//	index[4] = e;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s_%c \n", index[i], *index[i]);
//		//*index[i]��ÿ�������ַ���index�������׵�ַ����ȫ������
//
//	}
//	for (i = 0; i < 4; i++)//ð��������ѭ�������ܼ��˵�����
//	{
//		for (j = 0; j < 4 - i; j++)//�����Ƚ� ����������ƶ�
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

 //��װð��������
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

    // ���÷�װ��ð��������
    bubbleSort(index, 5);

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%s_%c\n", index[i], *index[i]);
    }

    return 0;
}

// 202548del.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

//#include <iostream>
//int bookname()
//{
//	//������a,b,c,d,e���׵�ַ
//	char a[30] = "Think in Java";
//	char b[30] = "C programming language";
//	char c[30] = "Data Structure";
//	char d[30] = "A Writer\'s Reference";
//	char e[30] = "English in use";
//	printf("%s", a);//���������Դ����ַ�����ȫ������
//	char* str[5];//ÿ�����鶼��һ����ַ������ָ�������
//	str[0] = a;//�洢�����ַ������׵�ַ
//	str[1] = b;
//	str[2] = c;
//	str[3] = d;
//	str[4] = e;
//	int i, j;
//	//str[i]���ַ�����ȫ����*str[i]���ַ����ĵ�һ���ַ�
//	for (i = 0; i < 5; i++) {
//		printf("%s\n", str[i]);//
//	}
//	//ͨ���Ƚ�*str[i]������str[i]
//	//���ѭ�����ܵ�����
//	for (i = 0; i < 4; i++) {
//		//ÿ�˰������������ƶ�
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
//	//�Ҳ���h������
//	while (s[i] && s[i] != 'h') { i++; }
//	//����ɾ��
//	j = i + 1;
//	while (s[j]) {
//		s[j - 1] = s[j];
//		j++;
//	}
//	s[j - 1] = '\0';
//	puts(s);
//}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

//#include <stdio.h>
//
//// �鼮����������
//int bookname()
//{
//    // ������ a, b, c, d, e ���׵�ַ
//    char a[30] = "Think in Java";
//    char b[30] = "C programming language";
//    char c[30] = "Data Structure";
//    char d[30] = "A Writer's Reference";
//    char e[30] = "English in use";
//    char* str[5]; // ÿ�����鶼��һ����ַ������ָ�������
//    str[0] = a; // �洢�����ַ������׵�ַ
//    str[1] = b;
//    str[2] = c;
//    str[3] = d;
//    str[4] = e;
//    int i, j;
//
//    // ���δ���������
//    for (i = 0; i < 5; i++) {
//        printf("%s\n", str[i]);
//    }
//
//    // ͨ���Ƚ� *str[i] ������ str[i]
//    // ���ѭ�����ܵ�����
//    for (i = 0; i < 4; i++) {
//        // ÿ�˰������������ƶ�
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
//    // �������������
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
//    // p ָ��ԭ�ַ�����q ָ�����ַ��������ڸ��ǣ�
//    p = q = s;
//
//    // �����ַ���
//    while (*p) {
//        if (*p != 'h') {
//            *q = *p;
//            q++;
//        }
//        p++;
//    }
//
//    // ����ַ���������
//    *q = '\0';
//
//    puts(s);
//
//    // �����鼮����������
//    bookname();
//
//    return 0;
//}


