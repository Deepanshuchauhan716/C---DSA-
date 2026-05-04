#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

int isEmpty(){
    return ( front == -1);
}

int isFull(){
    return rear == SIZE - 1;
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

int main(){
    int choice,value;
    while(1){
        printf("Stack operation\n");
        printf(" 1 => Push element\n 2 => Pop element\n 3 => display element\n 4 => exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter value : ");
            scanf("%d",&value);
            Enqueue(value);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("Invalid Choice !");
        }
    }
}