#define _CRT_SECURE_NO_WARNINGS 1
//define是一个预处理指令 
#define MAX 10// 1 define 定义常量 
#include<stdio.h>
#define ADD(x,y) ((x)+(y))//2 define 定义宏

int main()
{
    int sum = ADD(2, 3);
    printf("sum = %d\n", sum);

    
    sum = 10 * ADD(2, 3);
    printf("sum = %d\n", sum);
    return 0;
}