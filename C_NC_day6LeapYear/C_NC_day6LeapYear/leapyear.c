 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0)||(year%400==0))
	{
		printf("������\n");
	}
	else 
	{
		printf("��������\n");
	}
}
int main()
{
	int year = 0;
	printf("���������\n");
	scanf("%d", &year);
	if (year > 0)
	{
		leap(year);
	}
	else
		printf("��������ȷ���\n");
	system("pause");
	return 0;
}
