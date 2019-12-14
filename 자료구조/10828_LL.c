#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct NODE node;
typedef struct STACK stack;
struct NODE
{
	node* prev;
	int data;
};
struct STACK
{
	node* top;
	int size;
};

int main()
{
	stack* myst = (stack*)malloc(sizeof(stack));
	myst->top = NULL;
	myst->size = 0;
	int n;
	scanf("%d\n", &n);

	char cmd[20];
	for (int i = 0; i < n; i++)
	{
		scanf(" %[^\n]", cmd);
		if (!strcmp(cmd, "pop"))
		{
			if (myst->top == NULL)
				printf("-1\n");
			else
			{
				printf("%d\n", myst->top->data);
				node* temp = myst->top;
				myst->top = temp->prev;
				free(temp);
				myst->size--;
			}
		}
		else if (!strcmp(cmd, "top"))
		{
			if (myst->top == NULL)
				printf("-1\n");
			else
				printf("%d\n", myst->top->data);
		}
		else if (!strcmp(cmd, "size"))
			printf("%d\n", myst->size);
		else if (!strcmp(cmd, "empty"))
		{
			if (myst->size)
				printf("0\n", myst->size);
			else
				printf("1\n", myst->size);
		}
		else
		{
			char cmd2[4];
			int num;
			sscanf(cmd, "%s %d", cmd2, &num);
			node* new_node = (node*)malloc(sizeof(node));
			new_node->prev = myst->top;
			myst->top = new_node;
			myst->size++;
			new_node->data = num;
		}

	}
}
