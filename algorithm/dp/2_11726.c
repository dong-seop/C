#include <stdio.h>
int main() 
{
	int n, cur;
	scanf("%d", &n);
	int old2 = 1, old1 = 2;
	if (n == 1 || n == 2)
		printf("%d", n);
	else
	{
		for (int i = 3; i <= n; i++) 
		{
			cur = (old2 + old1)%10007;
			old2 = old1;
			old1 = cur;
		}
		printf("%d", cur);
	}
}