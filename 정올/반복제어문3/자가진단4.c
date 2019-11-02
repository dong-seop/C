#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = n-1; i >= 0; i--)
	{
		for (int k = 0; k < n-i-1; k++)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}