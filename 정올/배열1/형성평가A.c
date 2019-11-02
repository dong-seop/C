#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[20];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n-i - 1; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}