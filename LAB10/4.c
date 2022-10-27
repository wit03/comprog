//65070503408 Jarukit jintanasathirakul
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char data;
	struct Node *next;
	struct Node *prev;
};
struct Node *head=NULL;

void findPalindrome(char word[])
{
	int length=strlen(word);
	for(int i = length-1; i>=0; i--) {
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		new_node->data=word[i];
		new_node->next=head;
		new_node->prev=NULL;
		if(head!=NULL)
		{
			head->prev=new_node;
		}
		head=new_node;
	}
	struct Node *current=head;
	struct Node *look=head;
	for(int i=0;i<length/2;i++)
	{
		for(int j=i;j<length-1-i;j++)
		    look=look->next;
        //check if looking node is the same as the current (false)
		if(look->data!=current->data) {
			printf("False");
			return;
		}
		//move to next node
		current=current->next;
		while(&look->data!=&current->data) {
			look=look->prev;	
		}
	}
	printf("True");
	return;
}

int main()
{
	char word[1000];
	scanf("%s",&word);
	findPalindrome(word);
}