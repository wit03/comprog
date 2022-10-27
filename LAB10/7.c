//65070503408 Jarukit jintanasathirakul
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *list;
}linkedList;

linkedList *head = NULL;

void shift (int data)
{
    linkedList *link = (linkedList *) malloc(sizeof(linkedList));
    link->data = data;
    link->list = head;
    head = link;
}

int main() {
    int length;
    int input[110];
    scanf("%d", &length);
    
    //taking input
    for(int i = 0; i < length; i++)
        scanf("%d", &input[i]);

    //sorting
    for(int i = 2; i >= 0; i--) {
        for(int j = length-1; j >= 0; j--) {
            if(input[j] == i)
                shift(input[j]);
        }
    }
    linkedList *store = head;
    while (store != NULL) {
        printf("%d\n", store->data);
        store = store->list;
    }
}