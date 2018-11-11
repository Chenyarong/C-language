#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
void reverse(int arr[], int size)
{
	if (size <= 1)
		return;
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		swap(&arr[left], &arr[right]);
		left++;
		right--;
	}
}
int main()
{
	int array[10];
	printf("please enter the array:\n");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &array[i]);
	reverse(array, 10);
	for (int i = 0; i < 10; i++)
		printf("%d     ", array[i]);
	system("pause");
	return 0;
}