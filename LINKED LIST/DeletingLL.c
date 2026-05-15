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

struct node*  deleteing(struct node * head,int element){
    struct node * temp = head;
    struct node *ptr;

    for(int i = 1; i < element - 1; i++){
        temp = temp->next;
    }

    ptr = temp->next;

    temp->next = ptr->next;

    free(ptr);
    return head;
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
    printf("Enter position for delete : ");
    scanf("%d",&element);

    head = deleteing(head,element);
    printf("After delete : ");
    display(head);
    
}