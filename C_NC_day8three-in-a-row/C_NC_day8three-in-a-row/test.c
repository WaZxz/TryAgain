 #define _CRT_SECURE_NO_WARNINGS 1、
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请输入需要的操作：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束!\n");
			break;
		default:
			printf("输入有误请重新输入!\n");
			break;
		}
	} while (input);//当input=0的时候，while（0），循环结束，其他时候死循环。
	system("pause");
	return 0;
}