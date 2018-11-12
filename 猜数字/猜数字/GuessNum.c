 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*****1.开始游戏  2.结束游戏*****\n");
	printf("********************************\n");
}
void play()
{
	int input=0;
	int random_num = rand() % 100 + 1;
	while (1)
	{
		printf("输入要猜的数字：");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}	
}

int main()
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play();
		case 2:
			break;
		default:
			printf("输入错误重新输入");
		}
	} while (input);
	//system("pause");
	return 0;
}