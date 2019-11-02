#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char g;
	scanf(" %c", &g);
	if (g == 'A')
		printf("Excellent");
	else if (g == 'B')
		printf("Good");
	else if (g == 'C')
		printf("Usually");
	else if (g == 'D')
		printf("Effort");
	else if (g == 'F')
		printf("Failure");
	else
		printf("error");
	
	return 0;
}