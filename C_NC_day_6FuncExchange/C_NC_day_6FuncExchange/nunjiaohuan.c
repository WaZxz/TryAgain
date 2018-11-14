 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int a, int b)
{
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d,%d\n", a, b);
}
int main()
{
	int a = 0;
	int b = 0;
	printf("ÇëÊäÈë2¸öÊı£º\n");
	scanf("%d%d",&a,&b);
	swap(a, b);
	system("pause");
	return 0;
}