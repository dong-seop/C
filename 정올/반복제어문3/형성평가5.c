#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 2*(n-1);
	for (int i = 1; i <= 2 * n - 1; i += 2,cnt-=2)
	{
		for (int j = 0; j < cnt; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}