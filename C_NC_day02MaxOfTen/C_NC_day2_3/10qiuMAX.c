 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10], i;
	printf("������10�����֣�");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int MAX = a[0];
	for (i = 0; i < 10;i++)
	{
		if (MAX <= a[i])
			MAX = a[i];
	}
	printf("���ֵΪ��%d\n", MAX);
	system("pause");
	return;


}