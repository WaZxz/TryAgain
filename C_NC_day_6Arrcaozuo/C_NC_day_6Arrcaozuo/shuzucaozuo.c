 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void init(int *arr,int c,int arrlen)
{
	arr = (int*)malloc(arrlen*sizeof(int));
	printf("����������%d������:\n", arrlen);
	int h = 0;
	for (h = 0; h < arrlen; h++)
	{
		scanf("%d", &c);
		arr[h] = c;
	}
	printf("%s", arr);
}

void empty(int *arr, int arrlen)
{
	int j = 0;
	for (j = 0; j < arrlen; j++)
	{
		arr[j] = 0;
	}
	printf("%s", arr);
}

void reverse(int *arr, int arrlen)
{
	int k = 0;
	int temp;
	int mid = arrlen / 2;
	for (k = 0; k < mid; k++)
	{
		temp = arr[k];
		arr[k] = arr[arrlen - k];
		arr[arrlen - k] = temp;
	}
}

int main()
{
	int i = 0;
	int input = 0;
	int arrlen; 
	int *arr; 
	int c;
	printf("����������ĳ���:\n");
	scanf("%d", &arrlen);
	arr= (int*)malloc(arrlen*sizeof(int));
	printf("������%d������:\n", arrlen);
	for (i = 0; i<arrlen; i++)
	{
		scanf("%d", &c);
		arr[i] = c; 
	}
	printf("��������Ҫ�Ĳ���\n");
	printf("1����ʼ������\n");
	printf("2���������\n");
	printf("3����������\n");	
	printf("4���˳�����\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		init(*arr,arrlen,c);
		break;
	case 2:
		empty(*arr,arrlen);
		break;
	case 3:
		reverse(*arr, arrlen);
		break;
	case 4:
		break;
	default:
		printf("����������������룺\n");
	}
	system("pause");
	return 0;
}