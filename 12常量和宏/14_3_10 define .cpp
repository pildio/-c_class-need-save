#define _CRT_SECURE_NO_WARNINGS 1
//define��һ��Ԥ����ָ�� 
#define MAX 10// 1 define ���峣�� 
#include<stdio.h>
#define ADD(x,y) ((x)+(y))//2 define �����

int main()
{
    int sum = ADD(2, 3);
    printf("sum = %d\n", sum);

    
    sum = 10 * ADD(2, 3);
    printf("sum = %d\n", sum);
    return 0;
}