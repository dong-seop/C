#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	double g;
	scanf("%lf", &g);

	switch ((int)g)
	{
		case 4:
			printf("scholarship");
			break;
		case 3:
			printf("next semester");
			break;
		case 2:
			printf("seasonal semester");
			break;
		default:
			printf("retake");
			break;
	}
	
	return 0;
}