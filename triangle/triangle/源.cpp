#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 9
void SetTriangle(int(*a)[N])
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			a[row][0] = 1;//每一行的第一列值都为1
			if (row >= 1 && col >= 1)
			{
				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
			}
		}
	}
}

void PrintTriangle(int(*a)[N])
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			printf("%3d ", a[row][col]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[N][N] = { 0 };
	SetTriangle(arr);
	PrintTriangle(arr);

	system("pause");
	return 0;
}
