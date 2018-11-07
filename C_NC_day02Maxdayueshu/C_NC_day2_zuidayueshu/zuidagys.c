 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a, b, c;
	printf("输入两个数：\n");
	scanf("%d%d", &a, &b);
	if (a < b){
		c = a;
		a = b;
		b = c;

	}
	while (a%b != 0){
		c = a%b;
		a = b;
		b = c;
	}
	printf("最大公约数为：%d\n", b);
	system("pause");
	return 0;
}