#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 2 * n - 1; i >= 1; i -= 2,cnt++)
	{
		for (int j = 0; j < cnt; j++)
			printf(" ");
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
	cnt = n - 2;
	for (int i = 3; i <= 2 * n - 1; i += 2, cnt--)
	{
		for (int j = 0; j < cnt; j++)
			printf(" ");
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}