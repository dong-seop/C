#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n, cnt3 = 0, cnt5 = 0;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		if (n % 3 == 0)
			cnt3++;
		if (n % 5 == 0)
			cnt5++;
	}
	printf("Multiples of 3 : %d\n", cnt3);
	printf("Multiples of 5 : %d", cnt5);
	return 0;
}