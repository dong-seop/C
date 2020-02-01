#include <stdio.h>
int main() {
	int N;
	int sum = 0;
	scanf("%d", &N);
	int arr[1001][10];
	for (int i = 0; i < 10; i++)
		arr[1][i] = 1;

	for (int i = 2; i <= N; i++) 
	{
		for (int j = 9; j >= 0; j--) 
		{
			if (j == 9) 
				arr[i][j] = 1;
			else 
				arr[i][j] = (arr[i][j + 1] + arr[i - 1][j]) % 10007;
		}
	}

	for (int i = 0; i < 10; i++) 
		sum = sum + arr[N][i] % 10007;

	printf("%d\n", sum % 10007);
}