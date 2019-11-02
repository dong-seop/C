#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d", &n);
	int sum = 0;
	
	while (1)
	{
		sum += i;
		if (sum >= n)
			break;
		i+=2;
	}
	printf("%d %d", i/2+1, sum);
	return 0;
}