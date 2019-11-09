#include <stdio.h>

int main()
{
	int arr[26] = { 0, };
	char c;
	while (scanf(" %c", &c))
	{
		if ((int)c <65 || (int)c>90)
			break;
		arr[(int)c - 65]++;
	}
	for(int i=0;i<26;i++)
	{
		if (arr[i])
			printf("%c : %d\n", i+ 65, arr[i]);
	}
}