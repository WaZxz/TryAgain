 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int jisuan(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 0; i < n-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入位数：\n");
	scanf("%d", &n);
	ret = jisuan(n);
	printf("斐波那契数为:%d\n",ret);
	system("pause");
	return 0;
}
