#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ROW 11
#define COL 11
#define COUNT 10


void Menu();//�˵�����
void Display(char show[ROW][COL]);//��ӡ
int Sweep(char mine[ROW][COL], char show[ROW][COL]);
void SetMine(char mine[ROW][COL]);//�����׵�λ��
int GetNum(char mine[ROW][COL], char show[ROW][COL], int x, int y);//�����׵ĸ���
void ProNum(char mine[ROW][COL], char show[ROW][COL], int x, int y);//չ��
void Game(char mine[ROW][COL], char show[ROW][COL]);
