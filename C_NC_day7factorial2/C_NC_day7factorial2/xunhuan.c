 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int  jisuan(int n)
{
	int sum = 1;
	for (int i = 1; i <=n; i++)
	{
		sum = sum*i;
	}
	return sum;
}
int main()
{
	int n = 3;
	printf("%d\n", jisuan(n));
	system("pause");
	return 0;
}