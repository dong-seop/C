#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int wei,hei;
	scanf("%d %d", &hei, &wei);
	int ob = wei + 100 - hei;
	printf("%d\n", ob);
	if (ob>0)
		printf("Obesity");
	return 0;
}