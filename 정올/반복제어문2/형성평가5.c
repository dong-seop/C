#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n;
	int cnt_odd=0, cnt_even = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
			cnt_even++;
		else
			cnt_odd++;
	}
	printf("even : %d\n", cnt_even);
	printf("odd : %d", cnt_odd);
	return 0;
}
