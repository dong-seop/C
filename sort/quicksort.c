#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Swap(int* a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int* arr, int left, int right) {
	int pivot,low,high;

	low = left;
	high = right + 1;
	pivot = arr[left]; 

	do {
		do {
			low++; 
		} //while (low <= right && arr[low] < pivot);
		while (arr[low] < pivot);

		do {
			high--;
		} //while (high >= left && arr[high] > pivot);
		while (arr[high] > pivot);

		if (low < high) {
			Swap(&arr[low], &arr[high]);
		}
	} while (low < high);

	Swap(&arr[left], &arr[high]);

	return high;
}

void QuickSort(int* arr, int left, int right) {

	if (left < right) {
		int q = partition(arr, left, right);
		QuickSort(arr, left, q - 1); 
		QuickSort(arr, q + 1, right); 
	}
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
	int size = 10;
	int range = 100;
	srand(time(NULL));
	int* arr = CreateArr(size, range);
	PrintArr(arr, size);
	QuickSort(arr, 0, size - 1);
	PrintArr(arr, size);
	return 0;
}
