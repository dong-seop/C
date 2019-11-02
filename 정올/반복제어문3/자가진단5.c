#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n,cnt=0;
	scanf("%d", &n);
	for (int i = 2*n-1; i > 0; i-=2)
	{
		for (int k = 0; k < cnt; k++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
		cnt++;
	}
	return 0;
}