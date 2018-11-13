#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int pw = 1234;
	int pw1 = 0;
	int i = 0;
	printf("请输入密码：");
	scanf("%d", &pw1);
	for (i = 0; i < 2; i++)
	{
		if (pw1 == pw)
		{
			printf("输入正确\n");
			break;
		}
		else
		{
			printf("输入错误\n");
			printf("请输入密码：");
			scanf("%d", &pw1);
		}
		if (i == 1)
		{
			printf("退出程序\n");
			break;
		}
	}
	system("pause");
	return 0;
}