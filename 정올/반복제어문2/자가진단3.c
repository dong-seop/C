#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i+=2)
		printf("%d ", i);
	return 0;
}