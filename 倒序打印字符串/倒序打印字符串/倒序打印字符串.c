#include <stdio.h>
#include <stdlib.h>
char reverse_string(char* string)
{
	string++;
	if (*string != '\0')
	{
		reverse_string(string);
	}
	string--;
	printf("%3c", *string);
}
int main()
{
	char* string = "abcdefj";
	reverse_string(string);
	system("pause");
	return 0;
}