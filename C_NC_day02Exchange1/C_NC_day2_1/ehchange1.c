#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c;
	printf("请输入2个数字：\n");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("输出：\n%d\n%d\n", a, b);
	system("pause");
	return 0;
}
