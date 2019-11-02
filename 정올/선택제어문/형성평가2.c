#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n > 0)
		printf("plus");
	else if (n < 0)
		printf("minus");
	else
		printf("zero");
	return 0;
}