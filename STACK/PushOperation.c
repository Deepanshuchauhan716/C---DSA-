#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int stack[5], top = -1;

void push(int value){
    if(top == MAX - 1){
        printf("Stack overflow !!");
    }else{
        stack[++top] = value;
        printf("%d pushed into stack\n",value);
    }
}

int main(){
    push(10);
}