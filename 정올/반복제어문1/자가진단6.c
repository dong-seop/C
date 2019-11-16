#include <stdio.h>
int main()
{
	int n;
	while (1)
	{
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		printf("number? ");
		scanf("%d", &n);

		if (n == 1)
			printf("\nSeoul\n\n");
		else if (n == 2)
			printf("\nWashington\n\n");
		else if (n == 3)
			printf("\nTokyo\n\n");
		else if (n == 4) 
			printf("\nBeijing\n\n");
		else
		{
			printf("\nnone");
			break;
		}
	}
	return 0;
}