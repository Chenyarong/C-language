#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; int b; int c; int count=0;
	while (1)
	{
		printf("请输入小于等于255的a的值：");
		scanf_s("%d", &a);
		if (a <= 255)
			break;
	}
	while (1)
	{
		printf("请输入小于等于255的b的值：");
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
	printf("a与b的二进制数共有%d个位不同\n", count );
     system("pause");
     return 0;
}
