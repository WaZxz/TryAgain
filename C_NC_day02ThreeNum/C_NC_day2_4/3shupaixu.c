 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j, max;
	int arr[3];
	printf("ÇëÊäÈë3¸öÊı£º\n");
	for (i = 0; i<3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i<2; i++)
	{
		for (j = i + 1; j<3; j++)
		{
			if (arr[i]<arr[j])
			{
				max = arr[j];
				arr[j] = arr[i];
				arr[i] = max;
			}
		}
	}
	for (i = 0; i<3; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
