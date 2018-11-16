 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int k(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	return n*k(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入n:\n");
	scanf("%d", &n);
	ret = k(n);
	printf("结果为%d", ret);
	system("pause");
	return 0;
}