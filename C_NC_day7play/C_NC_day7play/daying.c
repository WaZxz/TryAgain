 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void play(int a)
{
	if (a != 0)
	{
		printf("%d  ", a % 10);
		play(a / 10);
	}
}
int main()
{
	int a = 1651321;
	if (a > 0)
	{
		play(a);
	}
	else
		printf("0\n");
	system("pause");
	return 0;
}