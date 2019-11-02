#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = n1; j >= n2; j--)
				printf("%d * %d = %2d   ", j, i, i*j);
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = n1; j <= n2; j++)
				printf("%d * %d = %2d   ", j, i, i*j);
			printf("\n");
		}
	}
	
	return 0;
}
