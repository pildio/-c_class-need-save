#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)	//����һ������
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("����������ֵ_>");
	scanf("%d%d",&num1,&num2);
	sum = add(num1, num2);
	printf("��ͽ��Ϊ��%d\n",sum);
	return 0;
}//�������ص���Ǽ򻯴��룬���븴��