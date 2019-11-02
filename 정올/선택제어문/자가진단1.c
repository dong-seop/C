#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", n);
	if (n < 0)
		printf("minus");
	return 0;
}