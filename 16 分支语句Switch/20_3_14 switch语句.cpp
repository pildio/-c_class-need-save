#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����һ�� case ���ĺ������һ�� break��䡣
//��֮������ôд�ǿ��Ա����������ǰ�����һ�� case ������������� break���)
int main()
{
    int day = 0;
    scanf("%d\n",&day);
    switch (day)//case������� break �ǳ���                switch(���� ���� ���ʽ) ��֧�ָ����� ����
    {
        case 1:
            printf("����һ\n");
            break;//���� ֹͣ ÿһ��case�������break
        case 2:
            printf("���ڶ�\n");
            break;
        case 3:
            printf("������\n");
            break;
        case 4:
            printf("������\n");
            break;
        case 5:
            printf("������\n");
            break;
        case 6:
            printf("������\n");
            break;
        case 7:
            printf("������\n");
            break;
    }//�� switch ���ʽ��ֵ����ƥ������ case ��ǩ��ֵʱ����� default �Ӿ��������ͻ�ִ��
    return 0;
}
