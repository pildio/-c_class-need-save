#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	static int a = 1;//static修饰局部变量 变量的生命周期边长出{}时不会销毁
	//本质上改变了变量的存储类型
	//内存分为栈区（局部变量）（函数参数）（临时的东西） 
	//堆区（动态内存分配） 
	//静态区（全局变量）（static修饰的静态变量）
	a++;
	printf("%d ",a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
// 当static修饰全局变量时 这个全局变量只能用于属于自己的（.c）内部
//无法用extern 调用到其他源文件使用这个变量
//全局变量在其他文件内部可以使用的原因是全局变量具有外部连接属性，但被static修饰后变成了内部属性 其他源文件就无法连接到静态的全局变量