#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int max= -1000,min = 1001;
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 999)
			break;
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	printf("max : %d\n", max);
	printf("min : %d", min);
	return 0;
}