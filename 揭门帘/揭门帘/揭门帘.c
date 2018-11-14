//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int static main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;                                       int size = sizeof (arr1)/ sizeof(arr1[0]);   printf("%d\n",size);   
//	int right = strlen(arr1) - 1;               printf("%d\n", right);                                     
//	printf("%s\n", arr2);
//	//while循环实现
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	//for循环实现
//	for (left = 0, right = strlen(arr1) - 1;
//		left <= right;
//		left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}