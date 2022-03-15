#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//在最后一个 case 语句的后面加上一条 break语句。
//（之所以这么写是可以避免出现在以前的最后一个 case 语句后面忘了添加 break语句)
int main()
{
    int day = 0;
    scanf("%d\n",&day);
    switch (day)//case决定入口 break 是出口                switch(整型 常量 表达式) 不支持浮点形 变量
    {
        case 1:
            printf("星期一\n");
            break;//跳出 停止 每一个case后面加入break
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期天\n");
            break;
    }//当 switch 表达式的值并不匹配所有 case 标签的值时，这个 default 子句后面的语句就会执行
    return 0;
}
