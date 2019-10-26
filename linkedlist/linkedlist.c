#include <stdio.h>
#include <stdlib.h>

typedef struct NODE node;
typedef struct LIST list;

struct NODE
{
	int data;
	node* next;
};
struct LIST
{
	node* head;
	node* tail;
};

node* CreateNode(int data)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
list* CreateList()
{
	list* newList = (list*)malloc(sizeof(list));
	newList->head = newList->tail = NULL;
	return newList;
}

void AppendNode(list* mylist, int data)
{
	node* newNode = CreateNode(data);
	if (mylist->head == NULL && mylist->tail == NULL)
		mylist->head = mylist->tail = newNode;
	else
	{
		mylist->tail->next = newNode;
		mylist->tail = newNode;
	}
}
void PrintList(list* mylist)
{
	node* curr = mylist->head;
	while (curr != NULL)
	{
		printf("%d -> ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}
void InsertNode(list* mylist, int data, int position)
{
	node* curr = mylist->head;
	node* prev = mylist->head;
	node* newNode = CreateNode(data);

	int cnt = 1;
	if (position == 1)  //첫번째에 node 추가
	{
		newNode->next = curr;
		mylist->head = newNode;
		return;
	}
	while (curr != NULL)
	{
		if (cnt == position)
		{
			prev->next = newNode;
			newNode->next = curr;
			break;
		}
		prev = curr;
		curr = curr->next;
		cnt++;
	}
}

void DeleteNode(list* mylist, int position)
{
	node* curr = mylist->head;
	node* prev = mylist->head;
	
	int cnt = 1;

	while (curr != NULL)
	{
		if (cnt == position)
		{
			if (curr == mylist->head)
				mylist->head = curr->next;
			else if (curr == mylist->tail)
			{
				mylist->tail = prev;
				prev->next = NULL;
			}
			else
				prev->next = curr->next;
			free(curr);
			return;
		}
		prev = curr;
		curr = curr->next;
		cnt++;
	}
}
int main()
{
	list* mylist = CreateList();
	for (int i = 1; i <= 5; i++)
		AppendNode(mylist, i * 10);
	PrintList(mylist);

	InsertNode(mylist, 25, 3);
	InsertNode(mylist, 35, 5);
	PrintList(mylist);
	DeleteNode(mylist, 7);
	PrintList(mylist);
	return 0;
}
