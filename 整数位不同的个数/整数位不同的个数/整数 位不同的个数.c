#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; int b; int c; int count=0;
	while (1)
	{
		printf("������С�ڵ���255��a��ֵ��");
		scanf_s("%d", &a);
		if (a <= 255)
			break;
	}
	while (1)
	{
		printf("������С�ڵ���255��b��ֵ��");
		scanf("%d", &b);
		if (b <= 255)
			break;
	}
	c = a^b;
	for (int i = 0; i < 32; i ++)
	{
		if (((c >> i) & 1) == 1)
			count++;
	}
	printf("a��b�Ķ�����������%d��λ��ͬ\n", count );
     system("pause");
     return 0;
}
