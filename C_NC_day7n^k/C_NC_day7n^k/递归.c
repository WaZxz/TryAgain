 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int jisuan(int n, int k)
{
	if (k > 0)
	{
		return n*jisuan(n, k - 1);
	}
	else
		return 1;
}
int main()
{
	int n = 2;
	int k = 3;
	printf("%d\n",jisuan(n,k));
	system("pause");
	return 0;
}