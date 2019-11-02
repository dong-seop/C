#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int y;
	scanf("%d", &y);
	
	
	if (y >= 20)
		printf("adult");
	else
		printf("%d years later", 20 - y);
	return 0;
}