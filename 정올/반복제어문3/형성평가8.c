#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 1;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
			printf("  ");
		for (int j = 0; j < i; j++, cnt++)
			printf("%d ", cnt);
		printf("\n");
	}
	return 0;
}