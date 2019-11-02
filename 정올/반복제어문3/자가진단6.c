#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n,cnt=0;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for(int j=0;j<i;j++)
		{
			printf("%c", 65+cnt);
			cnt++;
		}
		printf("\n");
	}
	return 0;
}