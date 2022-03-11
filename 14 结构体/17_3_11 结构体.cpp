#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char Name[20];
	int Age;
	double Mark;
};
int main() 
{
	struct stu s = { "ÕÅÈý", 20, 85.5 };
	printf("1:%s %d %lf\n",s.Name,s.Age,s.Mark);
	struct stu * ps =&s;
	printf("2:%s %d %lf\n", (*ps).Name, (*ps).Age, (*ps).Mark);
	printf("3:%s %d %lf\n", ps->Name, ps->Age, ps->Mark);
	return 0;
}
	