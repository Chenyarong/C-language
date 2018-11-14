#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int static main()
{
	char str1[] = "I like you ! ! !";
	char str2[] = "****************";
	int left = 0;
	int right = strlen(str1)-1;
	while (left <= right)
	{
		str2[left] = str1[left];
		str2[right] = str1[right];
		left++;
		right--;
		printf("%s\n", str2);
		Sleep(1000);

	}
	for (left = 0; left <=right; left++,right --)
	{
		Sleep(1000);
		printf("%s\n", str2);
	}
	system("pause");
	return 0;
}





