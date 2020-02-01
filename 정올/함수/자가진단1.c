#include<stdio.h>

void func1(int n)
{
	for (int i = 0; i < n; i++)
		printf("~!@#$^&*()_+|\n");
}

int main()
{
	int a;
	scanf("%d", &a);
	func1(a);
	return 0;
}