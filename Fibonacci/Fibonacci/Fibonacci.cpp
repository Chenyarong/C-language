#include <stdio.h>
#include <stdlib.h>
int fib(int m)
{
	if (m == 1 || m == 2)
		return 1;
	else
	{
		return  (fib(m - 1) + fib(m - 2));
	}
}
int main()
{
	int m = 1; int n = 1; int i; int Fib = 1;//����ǰ������Ϊm,n��ֵ��Ϊ1
	printf("%8d", m);
	printf("%8d", n);
	for (i = 3; i <= 30; i++)//ֻ��ӡǰ30��
	{
		Fib = m + n;
		n = m;
		m = Fib;
		printf("%8d", Fib);
		if (i % 5 == 0)
			printf("\n");
	}
	printf("\n");
	printf("\n"); 
	for (i = 1; i <= 30; i++)//ֻ��ӡǰ30��
	{
		printf("%8d", fib(i));
		if (i % 5 == 0)
			printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}

