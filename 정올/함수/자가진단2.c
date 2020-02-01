#include<stdio.h>

double func1(int r)
{
	double area = 3.14*r*r;
	return area;
}

int main()
{
	int a;
	scanf("%d", &a);
	printf("%.2lf", func1(a));
	return 0;
}