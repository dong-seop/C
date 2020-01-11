#include <stdio.h>
int main() {
	int arr[1000] = { 0, 1, 3 };
	int n;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 2] * 2 + arr[i - 1]) % 10007;
	}
	printf("%d", arr[n]);
}