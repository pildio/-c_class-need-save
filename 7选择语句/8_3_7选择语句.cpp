#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������a b��ֵ_>");
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		printf("���ֵ��a=%d\n", a);
	}
	else
	{
		printf("���ֵ��b=%d\n", b);
	}
}