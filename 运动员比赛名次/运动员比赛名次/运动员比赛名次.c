#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
		A选手说：B第二，我第三；
		B选手说：我第二，E第四；
		C选手说：我第一，D第二；
		D选手说：C最后，我第三；
		E选手说：我第四，A第一；
		比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/
	//((b == 2) && (a != 3)) || ((b != 2) && (a ==3))
	//((b == 2) && (e != 4)) || ((b != 2) && (e ==4))
	//((c == 1) && (d != 2)) || ((c != 1) && (d==2))
	//((c == 5) && (d != 3)) || ((c != 5) && (d==3))
	//((e == 4) && (a != 1)) || ((e != 4) && (a==1))



	int a, b, c, d, e;
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b ++ )
		{
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if ((((b == 2) && (a != 3)) || ((b != 2) && (a == 3)))
							&& (((b == 2) && (e != 4)) || ((b != 2) && (e == 4)))
							&& (((c == 1) && (d != 2)) || ((c != 1) && (d == 2)))
							&& (((c == 5) && (d != 3)) || ((c != 5) && (d == 3)))
							&& (((e == 4) && (a != 1)) || ((e != 4) && (a == 1))))
						{
							if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
							{
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
								printf("A的名次是%d\n", a);
								printf("B的名次是%d\n", b);
								printf("C的名次是%d\n", c);
								printf("D的名次是%d\n", d);
								printf("E的名次是%d\n", d);
							}
						}
					}
				}
			}
		}
	}
     system("pause");
     return 0;
}
