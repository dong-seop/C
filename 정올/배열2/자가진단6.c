#include<stdio.h>

int main()
{
	int sum = 0;
	int n = 0, a = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &n);
			sum += n;
		}
		if (sum >= 320)
		{
			printf("pass");
			a++;
		}
		else
			printf("fail");
		printf("\n");
	}

	printf("Successful : %d", a);
	return 0;
}