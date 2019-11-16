#include <stdio.h>
int main()
{
	int n;
	int odd = 0, even = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		if (n % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("odd : %d ", odd);
	printf("even : %d ", even);
	return 0;
}