#include <stdio.h>
#include <stdlib.h>
void asc_sorted(int* arr,int size)//ascending����desending����
{
	int bound; int cur;//cur:current,bound :�߽�
	for (bound = 0; bound<size; ++bound)
	{
		for (cur = size - 1; cur>bound;--cur)
		{
			//�ҽ�Сֵ
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
	// ������Ϊ�����Ĳ���ʱ����ʽת����ָ�룬ָ���������Ԫ��
	// �ں����ⲿ�����鳤�����Ȼ��������������������
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