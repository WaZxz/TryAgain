#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"game.h"

int main()
{
	Menu();
	char mine[ROW][COL];
	char show[ROW][COL];
	int input = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW - 1; i++)
	{
		for (j = 0; j < COL - 1; j++)
		{
			mine[i][j] = '0';
			show[i][j] = '*';
		}
	}
	printf("��ѡ��:\n");
	while (1)
	{
	
		scanf("%d", &input);
		if (input == 1)
		{
			Game(mine,show);
			break;
		}
		if (input == 0)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
		{
			printf("��������������ѡ��\n");
	
		}
	}
	system("pause");
	return 0;
}
