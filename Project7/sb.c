#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <math.h>
//2023�ݿ���C���Կγ�ģ��� ��һ��
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
//��������⻹���еΣ������߼����Ѿ�û�������ˣ���Ҫ�������ƴ��������������ͼ�졣
//��scanf������ʹ��%f��ʽ���ַ�����ȡ�������������ڸ�ʽ���ַ����������һ�����з�\n���������ᵼ��scanf�ڵȴ�����ʱ����Ե������еĿհ׷����������з��������������ʱҪ��ע�⡣

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
//	printf("���ʽ��ֵΪ: % f", b);
//	return 0;
//}

//���ڵĴ��뻹��Ҫע��ϸ�����⣬��Ϊ�е�ʱ�򣬲����һЩ�µı����ᵼ�´������ݻ��ң�
//�����ڱ�׼�����������¶�����һ��b������ֱ���õ���Ŀ�е�x����Ȼ�����һ���ģ����ǻ�����һЩ
//����Ҫ��������֡�
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0 || a % 100 != 0 && a % 400 == 0)
//		printf("%d������",a);
//	else 
//		printf("%d��������",a);
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int year, leap;
//	printf("���������:");
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
//		printf("%d �� ",year);
//	else printf(" %d ����",year);
//		printf("����\n");
//	return 0;
//}

//�����Ķ����2.���������³���ʱ������abcd���������������

//�����ͦ�군�ģ���������Ҳû������ȷ�𰸣����Ĵ�����ǶԵ���
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
//���������
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

//2.����������Ԫ�ص�ƽ��ֵ
//main()
//{
//	float average(int a[]);//��������
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

//3.����main�����Ĺ������ڴ�ͷ���ĵ������в�����������ֵ��С�Ľڵ㡣
//struct  node
//{
//	
//		int data;
//		struct node* next;
//	
//};
//int min(struct  node *first) //ָ��firstΪ����ͷָ��
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
//�������������Ҫ��ȷ����ĵ�һ����ַ��ָ�룩�������ͷ�����һ������Ľڵ㣬
//�����洢���ݣ�ֻ������������������ġ�
//�����洢���ݵ���ͷ������һ���ڵ㡣
// ���ǵ�һ�ž��ӣ������԰ɣ����ⲻ�Ǻܶ࣬��������һЩ֪ʶ�Ļ��䡣



//�γ�ģ�������
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

//�����Ķ��� 2.

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
//	int a[20] = { 1,1,2,3 }; //�������ǰ���ֵ
//	for (int i = 4; i < 20; i++) //�����е�ǰ 20 ����и�ֵ
//		a[i] = a[i - 1] + a[i - 2];//�ӵ����ʼ�������������ǰ����֮��
//	for (int j = 0; j < 20; j++)
//	{//���������
//		printf("%d\t", a[j]);
//	n++;
//	if (n % 5 == 0)//�жϻ��У�ÿ���һ��
//		printf("\n");
//}
//return 0;
// }

//int main()
//{
//	float a[10], max, min, sum = 0.0, aver;
//	int i;
//	printf("������ 7 λ��ί�ĸ��֣�\n");
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%f", &a[i]);
//		if ((a[i] < 0) || (a[i] > 10))
//		{
//
//			
//			printf("�ɼ�����������ȷ��������0 - 10��\n");
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
//printf("\n ȥ��һ����߷֣�%.4f��", max);
//printf("ȥ��һ����ͷ�:% .4f\n", min);
//printf("��ѡ�����÷���: % .4f\n",aver);
//}

////���ж��壬
//int a = 1, b = 2;
//float x = 3, w;
////��Ϸ���Switch�����
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
////����ȷ�����ַ��������������
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
////����˵��int *p,m = 5,n;
// 
//������ȷ�ĳ������
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

    // ����쳲���������
    for (int i = 2; i < SIZE; i++) {
        f[i * GAP] = f[(i - 1) * GAP] + f[(i - 2) * GAP];
    }

    // ��ӡÿ��Ԫ�صĵ�ַ��ֵ
    for (int i = 0; i < SIZE; i++) {
        printf("Address: %p, Value: %d\n", (void*)&f[i * GAP], f[i * GAP]);
    }

    return 0;
}

