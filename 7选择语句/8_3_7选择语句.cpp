#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入a b的值_>");
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		printf("最大值是a=%d\n", a);
	}
	else
	{
		printf("最大值是b=%d\n", b);
	}
}