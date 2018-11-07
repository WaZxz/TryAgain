 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arrLen; //数组的长度
	int *array; //数组指针
	int c;
	int i;
	printf("请输入数组的长度:\n");
	scanf("%d", &arrLen);

	// 动态分配内存空间，如果失败就退出程序
	array = (int*)malloc(arrLen*sizeof(int));
	if (!array){
		printf("创建数组失败！\n");
		exit(1);
	}
	printf("请输入%d个整数:\n",arrLen);
	// 向内存中写入数据
	for (i = 0; i<arrLen; i++)
	{
		//c =getchar();
		scanf("%d", &c);
		array[i] = c; //*array++ =c;是通过指针对数组进行操作，也是可以的。
	
	}

	// 循环输出数组元素
	printf("数组为：\n");
	for (i = 0; i<arrLen; i++)
	{
		
		printf("%d", array[i]);
	}
	printf("\ns");
	free(array); //释放内存

	system("pause");
	return 0;
}
