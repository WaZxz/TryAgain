 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

int main()
{
	char killer;
	for (killer = 'A'; killer <= 'D'; killer++)//���������ASCII ��A-D����ѭ���ͱȽ�
	{
		//����ֱ��Ӧÿ���˶�����  ����A ��C     ��D    ����D
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)  //�������3��ʾ ��������˵���滰
		{
			printf("%c������\n", killer);
			break;
		}
	}
	system("pause");
	return 0;
}
