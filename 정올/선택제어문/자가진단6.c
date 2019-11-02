#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char s;
	int y;
	scanf(" %c %d", &s, &y);
	if (s == 'M')
	{
		if (y >= 18)
			printf("MAN");
		else
			printf("BOY");
	}
	else
	{
		if (y >= 18)
			printf("WOMAN");
		else
			printf("GIRL");
	}

	return 0;
}