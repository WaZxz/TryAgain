#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"game.h"
#include<time.h>


void Menu()//��Ϸ��ʼ����
{
	printf("******************************************\n");
	printf("*************   1.��ʼ��Ϸ   *************\n");
	printf("*************   0.�˳���Ϸ   *************\n");
	printf("******************************************\n");
}


void SetMine(char mine[ROW][COL])//�������,��Ϊ1��
{
	int count = COUNT;
	srand((unsigned)time(NULL));
	while (count)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int GetNum(char mine[ROW][COL],char show[ROW][COL], int x, int y)//�����Χ�׵ĸ���
{
	int count = 0;
	if (mine[x - 1][y - 1] == '1')//���Ϸ�
	{
		count++;
	}
	if (mine[x - 1][y] == '1')//���
	{
		count++;
	}
	if (mine[x - 1][y + 1] == '1')//���·�
	{
		count++;
	}
	if (mine[x][y - 1] == '1')//�Ϸ�
	{
		count++;
	}
	if (mine[x][y + 1] == '1')//�·�
	{
		count++;
	}
	if (mine[x + 1][y - 1] == '1')//���Ϸ�
	{
		count++;
	}
	if (mine[x + 1][y] == '1')//�ҷ�
	{
		count++;
	}
	if (mine[x + 1][y + 1] == '1')//���·�
	{
		count++;
	}
	return count;
}

void ProNum(char mine[ROW][COL], char show[ROW][COL], int x, int y)
{
	int count = GetNum(mine,show, x, y);
	if (count == 0)//�����Χ�˸�����û�ף�����Χ�˸����ӵ�����
	{
		show[x][y] = count + '0';
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				show[i][j] = GetNum(mine,show, i, j) + '0';
			}
		}
	}
	else
	{//������ף�������Χ�˸����ӵ��׵���Ŀ
		show[x][y] = count + '0';
	}
}


void Display(char show[ROW][COL])
{
	printf(" ");
	for (int i = 1; i < COL - 1; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (int i = 1; i < ROW - 1; i++)
	{
		printf("%d", i);
		for (int j = 1; j < COL - 1; j++)
		{
			printf(" %c ", show[i][j]);
		}
		printf("\n");
	}
}


int Sweep(char mine[ROW][COL], char show[ROW][COL])
{
	int count = 0;
	int x = 0;
	int y = 0;
	while (count != ((ROW - 2)*(COL -2) - COUNT))
	{
		printf("���������꣺(����������������)\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW - 1 && y >= 1 && y <= COL- 1)
		{
			if (mine[x][y] == '1')
			{
				printf("��ȵ����ˣ�\n");
				return 0;
			}
			else
			{
				ProNum(mine,show, x, y);
				Display(show);
				count++;
			}
		}
		else
		{
			printf("����������������룡");
		}
	}
	printf("��ϲ��Ӯ�ˣ�\n");
	Display(mine);
	return 0;
}


void Game(char mine[ROW][COL],char show[ROW][COL])
{
	SetMine(mine);
	Display(show);
	Sweep(mine, show);
}








