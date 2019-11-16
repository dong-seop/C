#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;
	int n;
	scanf("%d", &n);
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);
	return 0;
}