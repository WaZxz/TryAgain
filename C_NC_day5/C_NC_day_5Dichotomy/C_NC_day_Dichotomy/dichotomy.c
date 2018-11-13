#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int key = 01;
	int ret = search(arr, left, right, key);
	if (ret == -1)
	{
		printf("找不到\ns");
	}
	else
	{
		printf("找到了是%d\n",ret);
	}
	system("pause");
	return 0;
}