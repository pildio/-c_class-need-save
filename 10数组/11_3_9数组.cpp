#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };//数组的下标是从0开始的 数组可以通过下标访问
	//用arr表示数组后跟[] []内加入数字则为限定数组的个数
	printf("%d\n", arr[0]);//取出数组时若限定个数未满则返回0
	return 0;
}