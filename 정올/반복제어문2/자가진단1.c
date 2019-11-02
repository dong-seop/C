#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char n;
	scanf(" %c", &n);
	for (int i = 0; i < 20; i++)
		printf("%c", n);
	return 0;
}