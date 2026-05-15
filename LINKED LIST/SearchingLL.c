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

void searching(struct node * head,int element){

    int index = 0;
    
    struct node * temp = head;
    while(temp != NULL){
        index++;
        if(temp->data == element){
            printf("%d",index);
        }
        temp = temp->next;
    }
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
    third->next = NULL;

    printf("Original list : ");
    display(head);

    int element;
    printf("Enter element for search : ");
    scanf("%d",&element);

    searching(head,element);
    
}