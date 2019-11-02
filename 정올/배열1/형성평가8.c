#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int arr[100];
	int sum = 0, cnt = 0;
	
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
		if (arr[i] % 5 == 0)
		{
			sum += arr[i];
			cnt++;
		}
			
	}
	printf("Multiples of 5 : %d\n", cnt);
	printf("sum : %d\n", sum);
	printf("avg : %.1f", (double)sum/cnt);

	return 0;
}