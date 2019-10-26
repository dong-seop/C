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

	// select sort
	int min = 0;

	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		if (i != min)
			swap(&arr[min], &arr[i]);
	}
	PrintArr(arr, size);
	return 0;
}