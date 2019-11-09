#include <stdio.h>

int main()
{
	int arr[10] = { 0, };
	int d;
	while (scanf("%d", &d))
	{
		if (d==0)
			break;
		arr[d/10]++;
	}
	for(int i=0;i<10;i++)
	{
		if (arr[i])
			printf("%d : %d\n", i, arr[i]);
	}
}