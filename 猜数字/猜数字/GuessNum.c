 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*****1.��ʼ��Ϸ  2.������Ϸ*****\n");
	printf("********************************\n");
}
void play()
{
	int input=0;
	int random_num = rand() % 100 + 1;
	while (1)
	{
		printf("����Ҫ�µ����֣�");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
			printf("���������������");
		}
	} while (input);
	//system("pause");
	return 0;
}