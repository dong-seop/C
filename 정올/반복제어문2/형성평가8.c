#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n1,n2;
	scanf("%d %d", &n1, &n2);
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
			printf("%d ", i*j);
		printf("\n");
	}
	
	return 0;
}
