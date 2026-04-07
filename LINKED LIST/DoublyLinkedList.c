#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node * prev;
    struct node * next;
};

int main(){

    struct node * head;
    struct  node * second;
    struct node * third;

    head = (struct node* )malloc(sizeof(struct node));
    second = (struct node* )malloc(sizeof(struct node));
    third = (struct node* )malloc(sizeof(struct node));

    head->data = 12;
    head->prev = NULL;
    head->next = second;

    second->data = 13;
    second->prev = head;
    second->next = third;

    third->data = 14;
    third->prev = second;
    third->next = NULL;
}