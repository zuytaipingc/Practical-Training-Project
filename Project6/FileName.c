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
	index[0] = a;//ָ�� ��ַ����=�ַ������׵�ַ
	index[1] = b;
	index[2] = c;
	index[3] = d;
	index[4] = e;
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("%s_%c \n", index[i], *index[i]);
		//*index[i]��ÿ�������ַ���index�������׵�ַ����ȫ������

	}
	for (i = 0; i < 4; i++)//ð��������ѭ�������ܼ��˵�����
	{
		for (j = 0; j < 4 - i; j++)//�����Ƚ� ����������ƶ�
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
//// �޸� GAP Ϊ 1
//#define GAP 1
//
//int main() {
//    int fibonacci[SIZE * GAP];
//    // ��ʼ��ǰ����
//    fibonacci[0] = 1;
//    fibonacci[GAP] = 0;
//    fibonacci[2 * GAP] = 2;
//
//    // ����쳲���������
//    for (int i = 3; i < SIZE; i++) {
//        fibonacci[i * GAP] = fibonacci[(i - 1) * GAP] + fibonacci[(i - 2) * GAP] + fibonacci[(i - 3) * GAP];
//    }
//
//    // ��ӡÿ��Ԫ�صĵ�ַ��ֵ
//    for (int i = 0; i < SIZE; i++) {
//        printf("Address: %p, Value: %d\n", (void*)&fibonacci[i * GAP], fibonacci[i * GAP]);
//    }
//
//    return 0;
//}




//#define SIZE 20
////��ַ���Ϊ 8 �ֽ�
//#define GAP 1
//
//int main() {
//    // �����������ڴ洢�׳˽�������Ǽ������СΪ SIZE * GAP
//    unsigned long long factorial[SIZE * GAP];
//    // ��ʼ�� 0 �Ľ׳�Ϊ 1
//    factorial[0] = 1;
//
//    // ���� 1 �� 20 �Ľ׳˲��洢�������У����ռ�� GAP �洢
//    for (int i = 1; i < SIZE; i++) {
//        factorial[i * GAP] = factorial[(i - 1) * GAP] * (i + 1);
//    }
//
//    // ��ӡÿ��Ԫ�صĵ�ַ��ֵ
//    for (int i = 0; i < SIZE; i++) {
//        printf("Address: %p, Value: %llu\n", (void*)&factorial[i * GAP], factorial[i * GAP]);
//    }
//
//    return 0;
//}