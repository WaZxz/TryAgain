#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 11
#define COL 11
#define COUNT 10


void Menu();//菜单函数
void Display(char show[ROW][COL]);//打印
int Sweep(char mine[ROW][COL], char show[ROW][COL]);
void SetMine(char mine[ROW][COL]);//设置雷的位置
int GetNum(char mine[ROW][COL], char show[ROW][COL], int x, int y);//计算雷的个数
void ProNum(char mine[ROW][COL], char show[ROW][COL], int x, int y);//展开
void Game(char mine[ROW][COL], char show[ROW][COL]);
