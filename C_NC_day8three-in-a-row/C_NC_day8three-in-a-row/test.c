 #define _CRT_SECURE_NO_WARNINGS 1��
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
		printf("��������Ҫ�Ĳ�����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����!\n");
			break;
		default:
			printf("������������������!\n");
			break;
		}
	} while (input);//��input=0��ʱ��while��0����ѭ������������ʱ����ѭ����
	system("pause");
	return 0;
}