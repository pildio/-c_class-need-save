#define _CRT_SECURE_NO_WARNINGS 1
//字面常量
//格式字符有d, o, x, u, c, s, f, e, g等。
//％d整型输出，％ld长整型输出，
//％o以八进制数形式输出整数，
//％x以十六进制数形式输出整数，或输出字符串的地址。
//％u以十进制数输出unsigned型数据(无符号数)。注意：% d与% u有无符号的数值范围，也就是极限的值，不然数值打印出来会有误。
//％c用来输出一个字符，
//％s用来输出一个字符串，
//％f用来输出实数，以小数形式输出，默认情况下保留小数点6位。
//% .100f用来输出实数，保留小数点100位。
//％e以指数形式输出实数，
//％g根据大小自动选f格式或e格式，且不输出无意义的零。
#include<stdio.h>
enum SEX
{
	MALE,//此处赋值=2 则下面以此为 2 3 4
	FEMALE,//枚举常量的默认是从0开始，依次向下递增1的
	SECRET
};
//#define的标识符常量 

#define MAX 100

// 括号中的MALE, FEMALE, SECRET是枚举常量
int main()
{
	3.14;//字面常量
	const float pai = 3.14f;//const 修饰的常变量 

/*修饰的常变量在C语言中只是在语法层面限制了
变量 pai 不能直接被改变，但是 pai 本质上还是一个变量的，所以叫常变量*/
	
		//pa= 5.14; 
	    //const声明后的常量是不能直接修改的！
		printf("%f\n",pai);
		printf("max = %d\n", MAX);
		printf("%d\n", MALE);
		printf("%d\n", FEMALE);
		printf("%d\n", SECRET);
}