#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

typedef struct NODE node;
typedef struct STACK stack;

struct NODE
{
	char data;
	node* prev;
};

struct STACK
{
	int size;
	node* top;
};

node* CreateNode(char data)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->prev = NULL;
	return newNode;
}

stack* CreateStack()
{
	stack* newStack = (stack*)malloc(sizeof(stack));
	newStack->size = 0;
	newStack->top = NULL;
	return newStack;
}

char Pop(stack* myst)
{
	node* temp = myst->top;
	myst->top = temp->prev;
	myst->size--;
	
	char data = temp->data;
	free(temp);
	return data;
}

void Push(stack* myst,  char data)
{
	node* newNode = CreateNode(data);
	newNode->prev = myst->top;
	myst->top = newNode;
	myst->size++;
}

void PrintL(node* cur)
{
	if (cur == NULL)
		return;
	PrintL(cur->prev);
	printf("%c", cur->data);
}

int main()
{
	stack* left = CreateStack();
	stack* right = CreateStack();
	char init[100000];
	scanf("%s", init);

	for (int i = 0; i < 100000; i++)
	{
		if (init[i] == '\0')
			break;
		Push(left, init[i]);
	}

	int cmdNb = 0;
	scanf("%d", &cmdNb);

	char cmd[4];

	for (int i = 0; i < cmdNb; i++)
	{
		scanf(" %[^\n]", cmd);
		if (!strcmp(cmd, "L")) //커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
		{
			if (left->size)
				Push(right, Pop(left));
		}
		else if (!strcmp(cmd, "D")) //커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
		{
			if (right->size)
				Push(left, Pop(right));
		}
		else if (!strcmp(cmd, "B")) //커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨) 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
		{
			if (left->size)
				Pop(left);
		}
		else //P: $라는 문자를 커서 왼쪽에 추가함
		{
			char data;
			char p;
			sscanf(cmd, " %c %c", &p, &data);
			Push(left, data);
		}
	}

	node* temp = left->top;
	//print left stack reversly
	PrintL(temp);

	temp = right->top;
	while (temp != NULL)
	{
		printf("%c", temp->data);
		temp = temp->prev;
	}

	return 0;
}