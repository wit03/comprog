//65070503408 Jarukit jintanasathirakul
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *list;
} linkedlist; 

linkedlist *head = NULL; 

void moveNext(int value)
{
    linkedlist *link = (linkedlist *)malloc(sizeof(linkedlist));
    link->data = value;
    link->list = head;
    head = link;
}
int main()
{
    int total, temp;
    scanf("%d", &total);
    scanf("%d", &temp);
    int pos[total];
    for(int i = total-1; i >= 0; i--) {
        pos[i] = i+1;
        moveNext(pos[i]);
    }
    int j = 0;
    while(total != 1) {
        j += temp-1;
        while (j>= total)
            j -= total;
        linkedlist *marked = head;
        int k = 0;
        while(k < j - 1) {
            marked = marked->list;
            k++;
        }
        if (j != 0) {
            struct node* delete = marked->list;
            marked->list = marked->list->list;
            delete->list = NULL;
            free(delete);
        }
        else {
            head = head->list;
            marked->list = NULL;
            free(marked);
        }
        total--;
    }
    linkedlist *player = head;
    while (player != NULL){
        printf("%d", player->data);
        player = player->list;
    }
}