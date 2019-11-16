#include <stdio.h>
int main()
{
	int n;
	int cnt = 0;
	int sum = 0;
	while (1)
	{
		scanf("%d", &n);
		sum += n;
		cnt++;
		if (n >= 100)
			break;
	}
	printf("%d\n", sum);
	printf("%.1f", (float)sum / cnt);
	return 0;
}