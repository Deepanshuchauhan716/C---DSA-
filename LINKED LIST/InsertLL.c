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

struct node *  InserAtEnd(struct node * head, int val){

    struct node * ptr2 = (struct node * )malloc(sizeof(struct node));

    ptr2->data = val;
    ptr2->next = NULL;

    struct node * p = head;

    while(p->next != NULL){
        p = p->next;
    }

    p->next = ptr2;
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
    head = InserAtEnd(head,20);
    Traverse(head);
}