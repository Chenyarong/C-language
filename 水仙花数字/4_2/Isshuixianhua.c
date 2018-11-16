#include <stdio.h>
#include <stdlib.h>
int Isshuixianhua(int num)//num为需要判断是否为水仙花数的整数
{
	int x1 = num % 10;//除以10的余数=>个位
	int x2 = (num / 10) % 10;//=>十位
	int x3 = (num/ 100)%10;//=>百位
	if (x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == num)
		return num;
	else
		return 0;
}
int main()
{
	int X=100;
	for (X = 100; X < 1000; X++)
	{
		if (Isshuixianhua(X) != 0)
			printf("%d\n", Isshuixianhua(X));
		else
			continue;
	}
     system("pause");
     return 0;
}
