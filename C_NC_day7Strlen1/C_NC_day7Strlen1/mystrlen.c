 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int strlen1(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char *p = "abcde";
	int len = strlen1(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}