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
		int keyValue, j;
		if (itv % 2 == 0)	itv++;
		for (int i = itv; i < size; i++)  
		{
			keyValue = arr[i];
			for (j = i - itv; j >= 0 && arr[j]>keyValue; j -= itv)
			{
				arr[j + itv] = arr[j];
			}
			arr[j + itv] = keyValue;
		}
	}
	PrintArr(arr, size);
}