#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = -1;
	int count = 0;//����
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("��������1�ĸ��� = %d\n", count);
     system("pause");
     return 0;
}
