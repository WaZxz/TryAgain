 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0, b=0;
	printf("����2������\n");
	scanf("%d%d", &a, &b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("�����\n%d\n%d\n", a, b);
	system("pause");
	return 0;

}