#include <stdio.h>
#include <stdbool.h>
#define N 100

bool isAlpha(char c)
{
	int ascii = (int)c;
	if (65 <= ascii && ascii <= 90)
		return true;
	else if (97 <= ascii && ascii <= 122)
		return true;
	else
		return false;
}
int main()
{
	char c[N];
	scanf("%[^\n]s", c);
	
	int i = 0;
	while (c[i] != '\0')
	{
		int ascii = (int)c[i];
		if (65 <= ascii && ascii <= 90)
		{
			ascii += 13;
			if (ascii > 90)
				ascii -= 26;
			c[i] = (char)ascii;
		}
		else if (97 <= ascii && ascii <= 122)
		{
			ascii += 13;
			if (ascii > 122)
				ascii -= 26;
			c[i] = (char)ascii;
		}
		i++;
	}
	printf("%s", c);
}