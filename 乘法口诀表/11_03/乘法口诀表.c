#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int mul(n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d""*""%d""=""%d\t", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
int main()
{
	int m;
	printf("ÇëÊäÈëÊý×Ö£º");
	scanf("%d", &m);
	mul(m);
}
