#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Swap(int* a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void merge(int* arr, int left, int mid, int right, int* sorted) {
	int i, j, k;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			sorted[k++] = arr[i++];
		else
			sorted[k++] = arr[j++];
	}

	if (i > mid) {
		for (int l = j; l <= right; l++)
			sorted[k++] = arr[l];
	}
	else {
		for (int l = i; l <= mid; l++)
			sorted[k++] = arr[l];
	}

	for (int l = left; l <= right; l++) 
		arr[l] = sorted[l];
	
}
void MergeSort(int* arr, int left, int right, int* sorted)
{
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		MergeSort(arr, left, mid, sorted);
		MergeSort(arr, mid + 1, right, sorted);
		merge(arr, left, mid, right, sorted);
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
	int range = 50;
	srand(time(NULL));
	int* arr = CreateArr(size, range);
	int* sorted = (int*)malloc(sizeof(int)*size);
	PrintArr(arr, size);

	MergeSort(arr, 0, size - 1, sorted);
	
	PrintArr(arr, size);
	return 0;
}