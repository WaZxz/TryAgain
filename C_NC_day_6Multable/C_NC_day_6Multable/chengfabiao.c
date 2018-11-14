 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void jisuan(int input)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d s", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int input = 0;
	int a = 0;
	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &input);
		if (input > 0)
		{
			jisuan(input);
			break;
		}
		else
		{
			printf("输出错误，重新输入。");
		}
	}
	system("pause");
	return 0;

}