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
	int i,j;
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
}