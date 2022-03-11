#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	&a;
	printf("%p\n", &a);//%p专门用来打印地址
	int*p = &a;
	//*说明pa是指针变量
	//int  说明pa是int类型的
	return 0;
	}