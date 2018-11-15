#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int  sushu(int a)
{
	int k = 0;
	int i = 0;
	k = sqrt(a);
	for (i = 2; i < k; i++)
	{
		if (a%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	int ret = 0;
	printf("请输入数字：\n");
	scanf("%d", &a);
	ret = sushu(a);
	if (ret == 0)
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	system("pause");
	return 0;
}
