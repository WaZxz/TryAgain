 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arrlen=0;
	int i = 0;
	int j = 0;
	int *arr;
	int mid = 0;
	int left = 0;
	//int right = 0;
	
	int key ;
	printf("���������鳤�ȣ�\n");
	scanf("%d", &arrlen);
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int right = arrlen - 1;
	arr = (int*)malloc(arrlen*sizeof(int));
	if (! arr)
	{
		printf("��������ʧ��");
		exit(1);
	}
	printf("������%d����������\n", arrlen);
	for (i = 0; i < arrlen; i++)
	{
		scanf("%d", &j);
		arr[i] = j;
	}
	printf("��������Ҫ���ҵ����֣�");
	scanf("%d", &key);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (key>arr[mid])
		{
			left = mid + 1;
		}
		else if (key<arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
			
		
	}
	if (left <= right)
	{
		printf("�ҵ��ˣ��ڵ�%dλ\n", mid+1);
		/////////////////////////////////////Ϊɶ����mid
	}
	else
	{
		printf("û�ҵ�\n");
	}
	system("pause");
	return 0;
}