#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;
    printf("��������������:>");
    scanf("%d %d", &num1, &num2);
//scanf���ڴӼ����ϻ�ȡ��Ϣ ���ڣ�%d %dΪ�������ͣ�&Ϊ��ֵ
    sum = num1 + num2;
    printf("sum = %d\n", sum);
    return 0;
}
