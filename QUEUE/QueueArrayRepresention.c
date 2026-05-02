#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1,tail = -1;

int IsEmpty(){
    return(front == -1);
}

int IsFull(){
    return(tail == SIZE - 1);
}

void Push(int value){
    if(IsFull()){
        printf("Queue is Full !\n");
        return;
    }
    if(IsEmpty()){
        front = 0;
        queue[++tail] = value;
        printf("inserted %d\n",value);
    }
}

void pop(){
    if(IsEmpty()){
        printf("Queue is empty !\n");
        return;
    }
    printf("Deleted element %d :",queue[front]);
    if(front == tail){
        front = tail = - 1;
    }else{
        front++;
    }
}

void display(){
    if(IsEmpty()){
        printf("Empty\n");
        return;
    }
}