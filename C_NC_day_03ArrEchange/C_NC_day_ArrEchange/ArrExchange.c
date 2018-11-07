 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[5] = { 9, 8, 7, 6, 5 };
	int i, temp;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d\n", a[i]);
	}
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d", b[i]);
	}
	system("pause");
	return 0;
}
