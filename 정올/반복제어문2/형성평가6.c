#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n1, n2, sum = 0, cnt = 0;
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (int i = n1; i <= n2; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{ 
			sum += i;
			cnt++;
		}
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1f", (double)sum/cnt);

	return 0;
}
