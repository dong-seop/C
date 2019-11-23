
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

	for (int i = 1; i < size; i++)
	{
		int j, key = arr[i];		
		for (j = i - 1; j >= 0 && arr[j] > key; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
	PrintArr(arr, size);
}