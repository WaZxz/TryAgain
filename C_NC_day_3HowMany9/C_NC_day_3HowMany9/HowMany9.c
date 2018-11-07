 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			j++;
			printf("%d\n", i);
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (i / 10 == 9)
		{
			j++;
			printf("%d\n", i);
		}
	}
	printf("如上，0-100含有9的数共有%d个。\n",j);
	system("pause");
	return 0;
}