 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
		int t = 0;

		printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");

		t = getchar();

		if (t>='a'&&t<='z')

		{

			putchar(t - 32);

		}

		else if(t >= 'A'&&t <= 'Z')

		{

			putchar(t + 32);

		}

		else if (t >= '0'&&t <= '9')

		{

			;

		}

		printf("\n");
		system("pause");
		return 0;

	}
