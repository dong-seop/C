#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char arr[10];
	for (int i = 0; i < 10; i++)
		scanf(" %c", &arr[i]);
	for (int i = 9; i >= 0; i--)
		printf("%c ", arr[i]);
	return 0;
}