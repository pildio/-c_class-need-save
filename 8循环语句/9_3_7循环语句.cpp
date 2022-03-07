#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	while (a <= 9)
	{
		a++;
			printf("a的数值为%d\n", a);
	}
	if (a==10)
	{
		printf("输出结果a=%d\n", a);
	}
	return 0;
}