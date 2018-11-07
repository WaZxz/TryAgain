

#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (((i % 100 == 0) && (i % 400 == 0)) || ((i % 4 == 0) && (i % 100 != 0)))
		{
			count++;
			printf("%5d", i);
		}
	}
	printf("×Ü¹²%d¸ö\n", count);
	system("pause");
	return 0;

}

