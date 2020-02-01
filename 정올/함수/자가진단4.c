#include<stdio.h>

int max(int n1, int n2)
{
	//Á¶°Ç ? True : False
	return n1 > n2 ? n1 : n2;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d",max(max(a, b), c));
}