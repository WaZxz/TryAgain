 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[] = "         ";
	char arr2[] = "*********";
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr1[4 + i] = arr2[4 + i];
		arr1[4 - i] = arr2[4 - i];
		printf("%s\n", arr1);
	}
	printf("%s\n", arr2);
	char arr3[] = "         ";
	char arr4[] = "*********";
	int j = 0;
	for (j = 0; j< 4; j++)
	{
		arr4[j] = arr3[j];
		arr4[8 - j] = arr3[8 - j];
		printf("%s\n", arr4);
	}
	system("pause");
	return 0;
}