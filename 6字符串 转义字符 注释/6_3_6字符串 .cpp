#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b','i','t','\0'};
	char arr3[] = { 'b','i','t' };//δ��\0 �����ڴ��е�����ȫ������ȡ ϵͳ�޷���֪ʲôʱ���ַ�������
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n",arr3);
}
//�ڼ����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ������ݡ�