#pragma warning(disable:4996)
#include <stdio.h>

//100 개의 정수를 저장할 수 있는 배열을 선언하고 정수를 차례로 입력받다가 
//0 이 입력되면 0 을 제외하고 그 때까지 입력된 정수를 가장 나중에 입력된 
//정수부터 차례대로 출력하는 프로그램을 작성하시오.
int main()
{
	int arr[100];
	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			for (int j = i - 1; j >= 0; j--)
				printf("%d ", arr[j]);
			break;
		}
	}
	return 0;
}