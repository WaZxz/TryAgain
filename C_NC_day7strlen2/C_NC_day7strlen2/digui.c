 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int strlen2(char *str)
{
	if (*str != '\0')
		return 1 + strlen(str + 1); 
}
int main()
{
	char *p = "abcd";
	int len = strlen2(p);
	printf("%d\n",len);
	system("pause");
	return 0;
}