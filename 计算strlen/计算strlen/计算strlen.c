#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen_1(char  str[])
{
	if (str[0]=='\0')
	{
		return 0;
	}
	return strlen_1(str + 1) + 1;
}

int main()
{
	 char str[] = "abcde";

	 //��һ�ַ�����ʹ�õݹ�
	 int ret ;
	 ret = strlen_1(str);
	 printf("%d\n", ret);

	 //�ڶ��ַ���������
	 int strlen_2=0;
	 while (str [strlen_2]!= '\0')
		 strlen_2++;
	 printf("%d\n", strlen_2);

	 //�����ַ���������strlen����
	 int strlen_3 =strlen(str);
	 printf("%d\n", strlen_3);

	 //�����ַ�����ʹ��sizeof
	 int strlen_4 = sizeof(str) / sizeof(str[0]) - 1;
	 printf("%d\n", strlen_4);
	 system("pause");
	 return 0;
}