#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[11];
	for (int i = 1; i <= 10; i++)
		scanf("%d", &arr[i]);
	
	int sume = 0, sumo = 0;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			sume += arr[i];
		else
			sumo += arr[i];
	}
	printf("sum : %d\n", sume);
	printf("avg : %.1f", (double)sumo/5);
	return 0;
}