#include <stdio.h>
#include <stdlib.h>
void swap_1(int m, int n)
{
	int c;
	c = m;
	m = n;
	n = c;
}
void swap_2(int *m, int *n)
{
	int c;
	c = *m;
	*m = *n;
	*n = c;
}
int main()
{
	int a=0, b=0;
	printf("������a��ֵ��a=");
	scanf_s("%d", &a);
	printf("������b��ֵ��b=");
	scanf_s("%d", &b);
	swap_1(a, b);
	printf("a=%d\t", a);
	printf("b=%d\n\n", b);
	swap_2(&a, &b);
	printf("a=%d\t", a);
	printf("b=%d\n", b);
	system("pause");
	return 0;
}
