#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*1
   1 1                                                   
   1 2 1                                                 
   1 3 3 1                                             
   1 4 6 4 1                                          
   1 5 10 10 5 1                                   
   1 6 15 20 15 6 1*/                           
int main()
{
	int n=0;//����Ҫ��ӡ��������������Ҫ̫�󣬻�Ӱ���ӡЧ��
	while (n <= 0 || n >= 14)//��������������Ӱ���ӡЧ��
	{
		printf("��������Ҫ��ӡ������:");
		scanf("%d", &n);
	}
	int i = 1; int j = 1; //i�����У�j������
	int arr[20][20] = { 0 }; 
	for ( i = 1; i <= n; i++)
	{
		arr[i][1] = arr[i][i] = 1;//�����ߵ�����Ϊ1������ߵ�arr[i][1]=1,���ұߵ�arr[i][i]=1
	}
	for (i = 3; i <= n; i++)//�ӵ����еڶ��п�ʼ��ӡ�����ڲ�����
	{
		for (j = 2; j <= i-1; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];	
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i;j++)
		{
			printf("   ");//��Ϊ������printf("%6d", arr[i][j]);������3���ո�
		}
		for (j = 1; j <=  i; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
     system("pause");
     return 0;
}
