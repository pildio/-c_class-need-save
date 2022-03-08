#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)	//声明一个函数
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个数值_>");
	scanf("%d%d",&num1,&num2);
	sum = add(num1, num2);
	printf("求和结果为：%d\n",sum);
	return 0;
}//函数的特点就是简化代码，代码复用