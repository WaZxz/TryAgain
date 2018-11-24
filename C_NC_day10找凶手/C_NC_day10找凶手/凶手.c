 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

int main()
{
	char killer;
	for (killer = 'A'; killer <= 'D'; killer++)//巧妙地利用ASCII 从A-D进行循环和比较
	{
		//下面分别对应每个人都供词  不是A 是C     是D    不是D
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)  //这里等于3表示 有三个人说了真话
		{
			printf("%c是凶手\n", killer);
			break;
		}
	}
	system("pause");
	return 0;
}
