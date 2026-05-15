#include<stdio.h>
#include<stdlib.h>

struct node {
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

struct node *  InsertBeginLL(struct node * head, int value){
    struct node * Newnode = (struct node *)malloc(sizeof(struct node));
    Newnode->data = value;
    Newnode->next = head;

    head = Newnode;

    return head;
}
int main(){

    int value;
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

    printf("After insertion : ");
    head = InsertBeginLL(head,value);
    display(head);


}