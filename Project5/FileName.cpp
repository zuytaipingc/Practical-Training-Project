#define _CRT_SECURE_NO_WARNINGS
#define S 3.14
#include <stdio.h>
int main()
{
	float r = 0;
	float area, per;
	scanf("%d\n", &r);
	area = S * r * r;
	per = 2 * S * r;
	printf("%f\n", area);
	printf("%f\n", per);
	return 0;
}
