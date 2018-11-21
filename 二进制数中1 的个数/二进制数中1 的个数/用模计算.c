#include <stdio.h>
#include <stdlib.h>
int main()
{
	//这个程序只适用于num是正数
	int num = -2;
	int count = 0;//计数
	while (num)
	{
	if (num % 2 == 1)
	count++;
	num = num / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
     system("pause");
     return 0;
}
