#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int ch = 0;
	while ((ch = getchar()) != EOF)//ÊäÈëctrl+z	¡ª¡ª¡ª¡ª¡ª¡ª getchar ¶ÁÈ¡½áÊø
	{
		putchar(ch);
		printf("%c", ch);
		
	}

	return 0;
}