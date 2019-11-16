#include <stdio.h>

int main()
{
	int n;
	while (1)
	{
		printf("number? ");
		scanf("%d", &n);
		if (n > 0)
			printf("positive integer\n");
		else if (n < 0)
			printf("negative number\n");
		else
			break;
	}
	return 0;
}