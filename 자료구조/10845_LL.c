#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct Node node;
typedef struct Queue queue;

struct Node {
	node *prev;
	node *next;
	int data;
};
struct Queue {
	node *head;
	node *tail;
	int size;
};
void Push(queue *myqueue, int data)
{
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (myqueue->size == 0)
	{
		myqueue->head = newnode;
		myqueue->tail = newnode;
	}
	else
	{
		newnode->prev = myqueue->tail;
		myqueue->tail->next = newnode;
		myqueue->tail = newnode;
	}
	myqueue->size++;
}
void Pop(queue *myqueue)
{
	if (myqueue->size == 0)
	{
		printf("-1\n");
	}
	else
	{
		node *temp = myqueue->head;
		int data = temp->data;
		myqueue->head = temp->next;
		free(temp);
		printf("%d\n", data);
		myqueue->size--;
	}
}
void Size(queue *myqueue)
{
	printf("%d\n", myqueue->size);
}
void Empty(queue *myqueue)
{
	if (myqueue->size == 0)
		printf("1\n");
	else
		printf("0\n");
}
void Front(queue *myqueue)
{
	if (myqueue->size == 0)
		printf("-1\n");
	else
		printf("%d\n", myqueue->head->data);
}
void Back(queue *myqueue)
{
	if (myqueue->size == 0)
		printf("-1\n");
	else
		printf("%d\n", myqueue->tail->data);
}
int main()
{
	queue *myqueue = (queue*)malloc(sizeof(queue));
	myqueue->head = NULL;
	myqueue->tail = NULL;
	myqueue->size = 0;
	int N;
	char c[20];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf(" %[^\n]", c);
		if (!strcmp(c, "pop"))
			Pop(myqueue);
		else if (!strcmp(c, "size"))
			Size(myqueue);
		else if (!strcmp(c, "empty"))
			Empty(myqueue);
		else if (!strcmp(c, "front"))
			Front(myqueue);
		else if (!strcmp(c, "back"))
			Back(myqueue);
		else
		{
			char c2[10];
			int X;
			sscanf(c, "%s %d", c2, &X);
			Push(myqueue, X);
		}
	}
}