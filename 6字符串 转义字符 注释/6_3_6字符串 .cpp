#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b','i','t','\0'};
	char arr3[] = { 'b','i','t' };//未加\0 导致内存中的数据全部被读取 系统无法得知什么时候字符串结束
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n",arr3);
}
//在计算字符串长度的时候 \0 是结束标志，不算作字符串内容。