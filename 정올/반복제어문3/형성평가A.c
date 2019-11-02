#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 1;
	for (int i = 1; i <=n; i++)
	{
		for (int j = 1; j <= n; j++,cnt+=2)
		{
			if (cnt >= 10)
				cnt = 1;
			printf("%d ", cnt);
		}
		printf("\n");
	}
	return 0;
}