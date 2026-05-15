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

void InsertAtSpecific(struct node * head,int value,int index){

    struct node * NewNode = (struct node*)malloc(sizeof(struct node));
    struct node * temp = head;

    NewNode->data = value;

    for(int i = 1; i < index - 1; i++){
        temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}

int main(){

    int value,index;
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 56;
    third->next = NULL;

    printf("Before insertion : ");
    display(head);

     printf("Enter value : ");
     scanf("%d",&value);

     printf("Enter index : ");
     scanf("%d",&index);
    printf("After insertion : ");
    InsertAtSpecific(head,value,index);
    display(head);

}