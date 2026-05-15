#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void display(struct node * head){
    while(head != NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}


int main(){
    struct node * head;
    struct  node * second;
    struct node * third;

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = head;

    printf("Original list : ");
    display(head);
    
}