#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c;
	printf("������2�����֣�\n");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("�����\n%d\n%d\n", a, b);
	system("pause");
	return 0;
}
