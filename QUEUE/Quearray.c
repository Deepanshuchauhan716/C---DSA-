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