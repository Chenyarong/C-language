#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i; int j = 1;  int s = 0; int n = 1; int a; int Sn; //SnΪ���յĺͣ���Ϊ����
	printf("������һ������0��һλ����\n");
	scanf_s("%d", &a);
	printf("������nֵ��nΪǰ����ĺͣ�", n);
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i-1; j++)
		{
			s = s+ pow(10, j)*a;
		}
		Sn = s;
	}
	printf("%d", Sn);
	system("pause");
	return 0;
}