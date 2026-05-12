// INSERTAT BEGIN
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void Traverse(struct node * head){
    struct node * temp = head;

    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp  = temp->next;
    }
     printf("NULL\n");
}

struct node *  InserAtbegin(struct node * head, int value){

    struct node * ptr = (struct node * )malloc(sizeof(struct node));

    ptr->data = value;
    ptr->next = head;

    head = ptr;

    return head;
}

int main(){

    struct node * head;
    struct node * second;
    struct node * third;

    head = (struct node * )malloc(sizeof(struct node));
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node * )malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 56;
    third->next = NULL;

    Traverse(head);
    head = InserAtbegin(head,11);
    Traverse(head);
}