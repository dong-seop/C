#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (int i = n1; i <= n2; i++)
		printf("%d ", i);
	return 0;
}