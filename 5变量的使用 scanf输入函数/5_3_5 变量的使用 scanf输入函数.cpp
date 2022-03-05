#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    printf("输入两个操作数:>");
    scanf("%d %d", &num1, &num2);
//scanf用于从键盘上获取信息 （内）%d %d为整数类型，&为赋值
    sum = num1 + num2;
    printf("sum = %d\n", sum);
    return 0;
}
