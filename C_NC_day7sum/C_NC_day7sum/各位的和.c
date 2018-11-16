#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int cal(int n)
{
	int sum = 0;
	int m = 0;
	if (n != 0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + cal(n);
	}
	return sum;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf("%d", &n);
	ret = cal(n);
	printf("%d", ret);
	system("pause");
	return 0;
}