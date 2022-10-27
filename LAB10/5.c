//65070503408 Jarukit jintanasathirakul
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
struct Node *head=NULL;
struct Node *bottom=NULL;

void insert(int data) {
	struct Node *resultList=(struct Node*)malloc(sizeof(struct Node));
	resultList->data=data;
	resultList->next=head;
	resultList->prev=NULL;
	if(head)
		head->prev=resultList;
	head=resultList;
}

int main() {
	int length;
	scanf("%d",&length);
	int data;
	for(int i = 0; i < length; i++)
	{
		scanf("%d", &data);
		insert(data);
	}
	struct Node *store=head;
	while(store)
	{
		printf("%d\n", store->data);
		store=store->next;
	}
}