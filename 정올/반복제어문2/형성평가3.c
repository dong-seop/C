#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d", &n);
	for (int i = 5; i <= n; i += 5)
		sum += i;
	printf("%d", sum);
	return 0;
}