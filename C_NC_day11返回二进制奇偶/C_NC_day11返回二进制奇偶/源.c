 #define _CRT_SECURE_NO_WARNINGS 1��
#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int count = 0;//��������� λ��
	int a[32] = { 0 };
	int i = 0;
	int value = 0;
	printf("��������:\n");
	scanf("%d", &value);
	while(value)
	{
		a[i++] = value % 2;
		value /= 2;
		count++;
	}
	printf("��������\n");
	for (i = count; i >= 0; i -= 2) 
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("ż������\n");
	for (i = count - 1; i >= 0; i -= 2) 
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}