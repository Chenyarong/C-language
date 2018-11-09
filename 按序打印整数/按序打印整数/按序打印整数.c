#include <stdio.h>
#include <stdlib.h>
void printnum(int m)
{
	if (m > 9)
		printnum(m / 10);
	printf("%d\t", m % 10);
}
int main()
{
	int m;
	printf("please enter number:");
	scanf_s("%d", &m);
	printnum(m);
	system("pause");
	return 0;
}