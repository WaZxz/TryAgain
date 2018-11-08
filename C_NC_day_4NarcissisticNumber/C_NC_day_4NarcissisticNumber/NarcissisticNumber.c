 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  a = 0, b = 0, c = 0, sum1 = 0, sum2 = 0;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				sum1 = (a * 1 + b * 10 + c * 100);
				sum2 = (a*a*a + b*b*b + c*c*c);
				if (sum1 == sum2)
				{
					printf("%d\n", sum1);
				}
			}
		}
	}
	system("pause");
	return 0;
}