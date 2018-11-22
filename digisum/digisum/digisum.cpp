#include <stdio.h>
#include <stdlib.h>
int  digisum(int m)
{
	int n; int sum;
	if (m != 0)
	{
		n = m % 10;
		m = m/10;
		sum = n + digisum(m);
		return sum;
	}
	else
		return 0;
}
int main()
{
	int a;
	printf("please enter number:\n");
	scanf_s("%d", &a);
	printf("%d\n", digisum(a));
	system("pause");
	return 0;
}