 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int count = 0;
	scanf("%d",&n);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n>>i)&1)==1)
		{
			count++;
		}
	}
	printf("%d\n",count);
	system("pause");
	return 0;
}


//此循环效率更高
//while (n)
//{
//	if ((n & 1) == 1)
//	{
//		count++;
//	}
//	n >> 1;
//}

