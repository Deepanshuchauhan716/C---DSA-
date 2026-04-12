#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;

void push(int value){
    struct node * Newnode = (struct node *)malloc(sizeof(struct node));
    if(Newnode == NULL){
        printf("Heap overflow !");
        return;
    }
    Newnode->data = value;
    Newnode->next = top;
    top = Newnode;
    printf("%d pushed into the stack \n",value);
}