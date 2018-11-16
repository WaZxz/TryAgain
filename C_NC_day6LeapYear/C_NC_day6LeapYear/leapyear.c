 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0)||(year%400==0))
	{
		printf("是闰年\n");
	}
	else 
	{
		printf("不是闰年\n");
	}
}
int main()
{
	int year = 0;
	printf("请输入年份\n");
	scanf("%d", &year);
	if (year > 0)
	{
		leap(year);
	}
	else
		printf("请输入正确年份\n");
	system("pause");
	return 0;
}
