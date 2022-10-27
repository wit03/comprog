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
	resultList->prev=bottom;
	resultList->next=NULL;
	if(head==NULL)
	{
		head=resultList;
		bottom=head;
		return;
	}
	bottom->next=resultList;
	bottom=resultList;
}
void move(int value) {
	struct Node *current;
	int count =0;
	for(current=head;current->next!=NULL;current=current->next)
	{
		if(current->data==value) {
			count++;		
			if(&(current->data)==&(head->data))
			{	
				head=current->next;
				continue;
			}
			current->prev->next=current->next;
			current->next->prev=current->prev;
			current->data='\0';
		}
	}
	for(int i = 0; i < count; i++)
		insert(value);
}

int main()
{
	int length;
	scanf("%d", &length);
	int temp;
	for(int i = 0; i < length; i++) {
		scanf("%d",&temp);
		insert(temp);
	}
	move(0);
	struct Node *store=head;
	while(store->next){
		printf("%d\n",store->data);
		store=store->next;
	}
	printf("%d\n",store->data);
	return 0;
}
