#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	while (a <= 9)
	{
		a++;
			printf("a����ֵΪ%d\n", a);
	}
	if (a==10)
	{
		printf("������a=%d\n", a);
	}
	return 0;
}