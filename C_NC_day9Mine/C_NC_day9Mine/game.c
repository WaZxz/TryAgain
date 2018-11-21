#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"game.h"
#include<time.h>


void Menu()//游戏开始界面
{
	printf("******************************************\n");
	printf("*************   1.开始游戏   *************\n");
	printf("*************   0.退出游戏   *************\n");
	printf("******************************************\n");
}


void SetMine(char mine[ROW][COL])//随机下雷,雷为1。
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


int GetNum(char mine[ROW][COL],char show[ROW][COL], int x, int y)//输出周围雷的个数
{
	int count = 0;
	if (mine[x - 1][y - 1] == '1')//左上方
	{
		count++;
	}
	if (mine[x - 1][y] == '1')//左边
	{
		count++;
	}
	if (mine[x - 1][y + 1] == '1')//左下方
	{
		count++;
	}
	if (mine[x][y - 1] == '1')//上方
	{
		count++;
	}
	if (mine[x][y + 1] == '1')//下方
	{
		count++;
	}
	if (mine[x + 1][y - 1] == '1')//右上方
	{
		count++;
	}
	if (mine[x + 1][y] == '1')//右方
	{
		count++;
	}
	if (mine[x + 1][y + 1] == '1')//右下方
	{
		count++;
	}
	return count;
}

void ProNum(char mine[ROW][COL], char show[ROW][COL], int x, int y)
{
	int count = GetNum(mine,show, x, y);
	if (count == 0)//如果周围八个格子没雷，打开周围八个格子的数字
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
	{//如果有雷，返回周围八个格子的雷的数目
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
		printf("请输入坐标：(可连续输入多个坐标)\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW - 1 && y >= 1 && y <= COL- 1)
		{
			if (mine[x][y] == '1')
			{
				printf("你踩到雷了！\n");
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
			printf("输入错误请重新输入！");
		}
	}
	printf("恭喜你赢了！\n");
	Display(mine);
	return 0;
}


void Game(char mine[ROW][COL],char show[ROW][COL])
{
	SetMine(mine);
	Display(show);
	Sweep(mine, show);
}








