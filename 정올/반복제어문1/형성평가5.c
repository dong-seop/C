#include <stdio.h>
int main()
{
	int b,h;
	char c;
	while (1)
	{
		printf("Base = ");
		scanf("%d", &b);
		printf("Height = ");
		scanf("%d", &h);
		printf("Triangle width = %.1f\n", b*h / 2.0);
		
		printf("Continue? ");
		scanf(" %c", &c);
		if (c != 'Y'&&c != 'y')
			break;
	}
	return 0;
}