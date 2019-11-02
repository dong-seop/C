#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	int cnt2 = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++,cnt++)
			printf("%c ", 65+cnt);
		for (int j = 0; j < n - i; j++,cnt2++)
			printf("%d ", cnt2);
		printf("\n");
	}
	return 0;
}