#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 1;
	for (int i = 1; i <=n; i++)
	{
		for (int j = 0; j < i; j++)
			printf("# ");
		printf("\n");
	}
	for (int i = n - 1; i > 0; i--,cnt++)
	{
		for (int j = 0; j < cnt; j++)
			printf("  ");
		for (int j = 0; j < i; j++)
			printf("# ");
		printf("\n");
	}
	return 0;
}