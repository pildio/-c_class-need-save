#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	&a;
	printf("%p\n", &a);//%pר��������ӡ��ַ
	int*p = &a;
	//*˵��pa��ָ�����
	//int  ˵��pa��int���͵�
	return 0;
	}