#include <stdio.h>
int main() {
	int N;
	int sum = 0;
	int arr[100][10] = { 0,1,1,1,1,1,1,1,1,1 };
	scanf("%d", &N);
	for (int i = 1; i < N; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			if (j == 0)
				arr[i][j] = arr[i - 1][1] % 1000000000;
			else if (j == 9)
				arr[i][j] = arr[i - 1][8] % 1000000000;
			else
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}
	for (int i = 0; i < 10; i++) {
		sum += (arr[N - 1][i] % 1000000000);
	}
	printf("%d\n", sum % 1000000000);
}