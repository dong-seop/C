#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	int sum_even = 0, sum_odd = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			sum_odd += arr[i];
		else
			sum_even += arr[i];
	}
	printf("odd : %d\n", sum_odd);
	printf("even : %d", sum_even);
	return 0;
}