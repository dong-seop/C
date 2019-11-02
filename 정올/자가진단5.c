#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	double arr[7] = { 0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	printf("%.1f", arr[c1] + arr[c2]);
	
	return 0;
}