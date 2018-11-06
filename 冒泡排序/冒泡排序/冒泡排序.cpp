#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[10]; int i; int j; int t;
	printf("请输入要排序的数：\n");
	for (i = 0; i <=9; i++)
		scanf_s("%d",& arr[i]);
	printf("\n");
	for (j= 0; j<9; j++)//9趟比较
	{
		for (i= 0; i< 9 - j; i++)//9-j次比较
		{
			if (arr[i]>arr[i + 1])
			{
				t = arr[i]; arr[i] = arr[i + 1]; arr[i + 1] = t;
			}
		}
	}
	printf("the sorted numbers:\n");
	for (i = 0; i <= 9; i++)
		printf("%d\t", arr[i]);
	system("pause");
	return 0;
}