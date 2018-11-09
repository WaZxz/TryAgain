 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i = 0;
	int k = 0, sum = 0,h;
	printf("需要几位：");
	scanf("%d", &h);
	for (i = 0; i < h; i++)
	{
		k = k * 10 + 2;
		sum += k;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}