#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[100];
	int index;
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
		{
			index = i;
			break;
		}
	}
	if (index < 3)
	{
		for (int i = 0; i < index; i++)
			printf("%d ", arr[i]);
	}
	else
		printf("%d %d %d", arr[index - 3], arr[index - 2], arr[index - 1]);
	return 0;
}