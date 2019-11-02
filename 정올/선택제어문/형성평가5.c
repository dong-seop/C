#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n == 1 || n==3 ||n==5||n==7||n==8||n==10||n==12)
		printf("31");
	else if(n==2)
		printf("28");
	else
		printf("30");
	return 0;
}