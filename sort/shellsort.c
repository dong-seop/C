#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void PrintArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int* CreateArr(int size, int range)
{
	int* arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++)
		arr[i] = rand() % range + 1;
	return arr;
}
int main()
{
	int size = 20;
	srand(time(NULL));
	int* arr = CreateArr(size, 200);
	PrintArr(arr, size);

	for (int itv = size / 2; itv > 0; itv /= 2)
	{
		if (itv % 2 == 0)	itv++;
		int keyValue, j, k;

		for (int i = 0; i < itv; i++)
		{
			for (j = i + itv; j < size; j = j + itv)
			{
				keyValue = arr[j];
				for (k = j - itv; k >= 0 && arr[k] > keyValue; k -= itv)
				{
					arr[k + itv] = arr[k];
				}
				arr[k + itv] = keyValue;
			}
		}
	}
	PrintArr(arr, size);
}