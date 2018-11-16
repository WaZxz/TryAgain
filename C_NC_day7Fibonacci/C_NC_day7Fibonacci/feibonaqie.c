#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int jisuan(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
	{
		return jisuan(a - 1) + jisuan(a - 2);
	}
}

int main()
{
	int a = 0;
	int b = 1;
	printf("ÇëÊäÈëÎ»Êý£º\n");
	scanf("%d", &a);
	int ret = jisuan(a);
	printf("%d", ret);
	system("pause");
	return 0;
}