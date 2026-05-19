#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void enqueue(int value){
    struct node * NewNode;
    NewNode = (struct node *)malloc(sizeof(struct node));

    NewNode->data = value;
    NewNode->next = NULL;

    if(front == NULL && rear == NULL){
        front = rear = NewNode;
    }

    else{
        rear->next = NewNode;
        rear = NewNode;
    }

    printf("%d element push is queue",value);
}

void Dequeue(){
    if(front == NULL){
        printf("Queue is empty\n");
    }

    struct node * temp;

    temp  = front;

    printf("%d is dequeue from queue\n");

    front = front->next;

    free(temp);

}

void Display(){
      if(front == NULL){
        printf("Queue is empty\n");
        return;
    }

    struct node * temp;

    temp = front;

    printf("Elements are : ");

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main(){
     enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}