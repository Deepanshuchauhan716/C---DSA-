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
