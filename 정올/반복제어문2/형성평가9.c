#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("(%d, %d) ", i,j);
		printf("\n");
	}
	return 0;
}
