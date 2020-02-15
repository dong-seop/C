#include <stdio.h>
#pragma warning(disable:4996)
//#define max(x,y) x>y? x:y
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int T,n;
	scanf("%d", &T);
	for (int t = 0; t < T; t++)
	{
		int stiker[2][100001] = { 0, };
		int dp[2][100001] = { 0, };
		scanf("%d", &n);
		
		for (int i = 0; i < 2; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				scanf("%d", &stiker[i][j]);
			}
		}

		dp[0][1] = stiker[0][1];
		dp[1][1] = stiker[1][1];

		dp[0][2] = stiker[0][2] + dp[1][1];
		dp[1][2] = stiker[1][2] + dp[0][1];

		for (int i = 3; i <= n; i++)
		{
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + stiker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + stiker[1][i];
		}
		int data = max(dp[0][n], dp[1][n]);
		printf("%d\n", data);
	}
	return 0;
}