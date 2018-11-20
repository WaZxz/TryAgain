 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("**********1.��ʼ��Ϸ************\n");
	printf("**********0.������Ϸ************\n");
	printf("********************************\n");
}


void InitBorad(char arr[ROW][COL])
{
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
}


void  DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j <COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col)
				printf("|");
		}
		printf("\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
		if (i < row)
		{
			for (int j = 0; j <COL; j++)
			{
				printf("___");
				if (j < col)
					printf("|");
			}
			printf("\n");
		}
	}
	for (int j = 0; j < 2; j++)
	{
		printf("   |");
	}
	printf("   \n");
}


void HumanMove(char board[ROW][COL], int row, int col,int count)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������λ�õ����꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= (ROW) && y >= 1 && y <= (COL) && board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			DisplayBoard(board, row, col);
			count++;
			break;
		}
		else
		{
			printf("�����������������!");
		}
	}
}


void Computermove(char board[ROW][COL], int row, int col)
{
		printf("�������ӣ�\n");
		while (1)
		{
			int x = rand() % 3;
			int y = rand() % 3;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				DisplayBoard(board, row, col);
				break;
			}
	}
}


char Judge(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж���
		{
			return board[i][0];
		}
	}
	for (int i = 0; i <= col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[i][1] != ' ')//�ж���
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
}


int Full(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] != ' ')
				return 1;
		}
	}
	return 0;
}


void game()
{
	char board[ROW][COL] = { 0 };
	int row = ROW - 1;
	int col = COL - 1;
	int a = (ROW*COL) / 2 + 1;
	int count = 0;
	int ret1 = 0;
	int ret2 = 0;
	DisplayBoard(board, col, row);
	InitBorad(board);
	while (1)
	{
		HumanMove(board, row, col,count);
		Computermove(board, row, col);
		ret1 = Judge(board, row, col);
		if (ret1 == '*'&&count<=a)
		{
			printf("��ϲ����Ӯ�ˣ�\n");
			break;
		}
		else if (count>a)
		{
			printf("ƽ�֣�\n");
			break;
		}
		if (ret1 == '#')
		{
			printf("���ź��������ˡ�\n");
			break;
		}
	}
}