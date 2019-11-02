#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	int i;
	char arr[6]="JUNGOL";
	char c;
	scanf(" %c", &c);
	
	for (i = 0; i < 6; i++)
	{
		if (c == arr[i])
		{
			printf("%d", i);
			break;
		}
	}
	if (i == 6)
		printf("none");
	return 0;
}