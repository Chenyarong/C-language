#include <stdio.h>
#include <stdlib.h>
int main()
{
	//�������ֻ������num������
	int num = -2;
	int count = 0;//����
	while (num)
	{
	if (num % 2 == 1)
	count++;
	num = num / 2;
	}
	printf("��������1�ĸ��� = %d\n", count);
     system("pause");
     return 0;
}
