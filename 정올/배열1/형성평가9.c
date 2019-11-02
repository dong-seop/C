#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[100], i;

	for(i =0; i<100;i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
	}
	printf("%d\n", i);

	for (int j = 0; j < i; j++)
	{
		if (arr[j] % 2 == 0)
			printf("%d ", arr[j] / 2);
		else
			printf("%d ", arr[j] * 2);
	}
	return 0;
}