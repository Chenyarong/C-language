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
	int n=0;//代表要打印的行数，尽量不要太大，会影响打印效果
	while (n <= 0 || n >= 14)//限制行数，避免影响打印效果
	{
		printf("请输入需要打印的行数:");
		scanf("%d", &n);
	}
	int i = 1; int j = 1; //i控制行，j控制列
	int arr[20][20] = { 0 }; 
	for ( i = 1; i <= n; i++)
	{
		arr[i][1] = arr[i][i] = 1;//令两边的数都为1令最左边的arr[i][1]=1,最右边的arr[i][i]=1
	}
	for (i = 3; i <= n; i++)//从第三行第二列开始打印数组内部内容
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
			printf("   ");//因为下面是printf("%6d", arr[i][j]);所以是3个空格
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
