 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arrLen; //����ĳ���
	int *array; //����ָ��
	int c;
	int i;
	printf("����������ĳ���:\n");
	scanf("%d", &arrLen);

	// ��̬�����ڴ�ռ䣬���ʧ�ܾ��˳�����
	array = (int*)malloc(arrLen*sizeof(int));
	if (!array){
		printf("��������ʧ�ܣ�\n");
		exit(1);
	}
	printf("������%d������:\n",arrLen);
	// ���ڴ���д������
	for (i = 0; i<arrLen; i++)
	{
		//c =getchar();
		scanf("%d", &c);
		array[i] = c; //*array++ =c;��ͨ��ָ���������в�����Ҳ�ǿ��Եġ�
	
	}

	// ѭ���������Ԫ��
	printf("����Ϊ��\n");
	for (i = 0; i<arrLen; i++)
	{
		
		printf("%d", array[i]);
	}
	printf("\ns");
	free(array); //�ͷ��ڴ�

	system("pause");
	return 0;
}
