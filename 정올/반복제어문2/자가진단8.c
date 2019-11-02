#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	for (int i = 2; i <= 4; i++)
	{
		for (int j = 1; j <= 5; j++)
			printf("%d * %d = %2d   ", i, j, i*j);
		printf("\n");
	}
	return 0;
}