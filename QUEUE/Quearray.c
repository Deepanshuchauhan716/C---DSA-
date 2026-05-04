#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

int isEmpty(){
    return ( front == -1);
}

int isFull(){
    rear = SIZE - 1;
}

void Enqueue(int value){
    if(isFull()){
        printf("Stack is full\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    queue[++rear] = value;
    printf("Inserted %d",value);
}

void dequeue(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }
    printf("Deleted %d\n",queue[front]);
    if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }
}

void display(){
    printf("Queue element are : ");
    for(int i = front; i <= rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}