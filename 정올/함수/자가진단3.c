#include<stdio.h>

int func1(int n)
{
	int sq = n * n;
	return sq;
}

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j <= a; j++)
			printf("%d ", i*a + j);
		printf("\n");
	}
	return 0;
}