#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	int cnt = 0;
	while(1)
	{
		scanf("%d", &n);
		if (n < 0 || n>100)
			break;
		sum += n;
		cnt++;
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1f", (float)sum / cnt);
	return 0;
}