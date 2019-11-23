#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertionSort(int* arr, int start, int last, int itv)
{
	for (int i = start+itv; i < last; i+=itv)
	{
		int j, key = arr[i];
		for (j = i - itv; j >= start && arr[j] > key; j-=itv)
		{
			arr[j + itv] = arr[j];
		}
		arr[j + itv] = key;
	}
}
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
		for (int i = 0; i < itv; i++)
		{
			InsertionSort(arr, i, size, itv);
		}
	}
	PrintArr(arr, size);
}