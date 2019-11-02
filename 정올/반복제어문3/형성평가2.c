#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n, mul;
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++)
	{
		mul = n * i;
		if (mul >= 100)
			break;
		printf("%d ", mul);
		if (mul % 10 == 0)
			break;
	}
	return 0;
}