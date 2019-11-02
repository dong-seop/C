#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n,cnt=1,i,j,k,cnt2=0;
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ", cnt);
			cnt++;
		}
		for (k = 0; k < n - j+1; k++)
		{
			printf("%c ",65+cnt2);
			cnt2++;
		}
		printf("\n");
	}
	return 0;
}