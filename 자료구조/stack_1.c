#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int stack[10000];
int ind = 0;
int main()
{
	char cmd[20];
	int n;
	int num;
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++)
	{
		scanf(" %[^\n]", cmd);
		if (strlen(cmd) == 3)
		{
			if (!strcmp(cmd, "pop"))
			{
				if (ind == 0)
					printf("-1\n");
				else
					printf("%d\n", stack[ind--]);
			}
			else
			{
				if (ind == 0)
					printf("-1\n");
				else
					printf("%d\n", stack[ind]);
			}
		}
		else if (strlen(cmd) == 4)
		{
			printf("%d\n", ind);
		}
		else if (strlen(cmd) == 5)
		{
			if (ind)
				printf("0\n");
			else
				printf("1\n");
		}
		else
		{
			char cmd2[4];
			sscanf(cmd, "%s %d", &cmd2, &num);
			stack[++ind] = num;
		}
	}
}
