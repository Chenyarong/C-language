#include <stdio.h>
#include <stdlib.h>
int Isshuixianhua(int num)//numΪ��Ҫ�ж��Ƿ�Ϊˮ�ɻ���������
{
	int x1 = num % 10;//����10������=>��λ
	int x2 = (num / 10) % 10;//=>ʮλ
	int x3 = (num/ 100)%10;//=>��λ
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
