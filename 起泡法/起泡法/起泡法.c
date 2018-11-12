#include <stdio.h>
#include <stdlib.h>
void asc_sorted(int* arr,int size)//ascending升序，desending降序
{
	int bound; int cur;//cur:current,bound :边界
	for (bound = 0; bound<size; ++bound)
	{
		for (cur = size - 1; cur>bound;--cur)
		{
			//找较小值
			if (arr[cur - 1] > arr[cur])
			{
				int temp = arr[cur];
				arr[cur] = arr[cur - 1];
				arr[cur - 1] = temp;
			}
		}
	}
}

int main()
{
	// 数组作为函数的参数时会隐式转换成指针，指向数组的首元素
	// 在函数外部将数组长度求好然后当做参数传到函数里面
	int arr[5];
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("please enter the array:\n");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	asc_sorted(&arr,size);
	for (int i = 0; i < 5; i++)
		printf ("%d\t", arr[i]);
	system("pause");
	return 0;
}