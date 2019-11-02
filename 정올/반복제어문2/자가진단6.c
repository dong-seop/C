#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int n, sum = 0,score;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score);
		sum += score;
	}
	double avg = (double)sum / n;
	printf("avg : %.1f\n", avg);
	if (avg >= 80)
		printf("pass");
	else
		printf("fail");

	return 0;
}