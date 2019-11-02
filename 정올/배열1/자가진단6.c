#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	int min = 1001;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	printf("%d", min);
	return 0;
}