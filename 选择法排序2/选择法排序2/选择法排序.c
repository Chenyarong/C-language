#include <stdio.h>
#include <stdlib.h>
void sort(int array[], int n)
{
	int i; int j; int k; int t;
	for (i = 0; i <= n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[k]>array[j])
				k = j;
		}
		t = array[k]; array[k] = array[j]; array[j] = t;
	}
}
int main()
{
	void sort(int array[], int n);
	int arr[10]; int i;
	printf("请输入需要排序的数\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	sort(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	system("pause");
	return 0;
}