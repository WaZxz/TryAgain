#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int pw = 1234;
	int pw1 = 0;
	int i = 0;
	printf("���������룺");
	scanf("%d", &pw1);
	for (i = 0; i < 2; i++)
	{
		if (pw1 == pw)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
			printf("���������룺");
			scanf("%d", &pw1);
		}
		if (i == 1)
		{
			printf("�˳�����\n");
			break;
		}
	}
	system("pause");
	return 0;
}