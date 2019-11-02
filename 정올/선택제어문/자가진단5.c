#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	double s1,s2;
	scanf("%lf %lf", &s1, &s2);
	if (s1>=4.0 && s2>=4.0)
		printf("A");
	else if (s1 >= 3.0 && s2 >= 3.0)
		printf("B");
	else
		printf("C");
	return 0;
}