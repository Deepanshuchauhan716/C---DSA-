// Circular linked list vo linked list hoti hai jiska last node NULL ki jagah First node ko point krta hai

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * PrintElement(struct node  *head){
    struct node * temp = head;
    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);

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

    PrintElement(head);

}
