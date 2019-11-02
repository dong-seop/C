#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	double w;
	scanf("%lf", &w);
	if (w <= 50.8)
		printf("Flyweight");
	else if(w<=61.23)
		printf("Lightweight");
	else if(w<=72.57)
		printf("Middleweight");
	else if (w<=88.45)
		printf("Cruiserweight");
	else
		printf("Heavyweight");
	return 0;
}