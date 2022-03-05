#define _CRT_SECURE_NO_WARNINGS 1

//定义一个变量的方法
#include<stdio.h>
	int age1 = 20;
	int age2 = 1;//大括号外为全局变量
int main()
{
	int age = 10;//大括号内为局部变量
	int age2 = 20;
	float weight = 39.600;
	printf("age=%d\n",  age);
	printf("age1=%d\n", age1);
	printf("age2=%d\n", age2);//（局部变量优先）当局部变量跟全局变量重名时优先使用局部变量
	printf("%f\n", weight);
	return 0;
}
//局部变量的作用域是变量所在的局部范围。全局变量的作用域是整个工程。
//1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。 全局变量的生命周期是：整个程序的生命周期。




