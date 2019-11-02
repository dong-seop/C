#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	int min = 10001;
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 100)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		else
		{
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (max == 0)
		max = 100;
	if (min == 10001)
		min = 100;
	printf("%d %d",max, min);
	return 0;
}