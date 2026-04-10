#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int stack[MAX], top = -1;

void push(int value){
    if(top == MAX - 1){
        printf("Stack overflow !!\n");
    }else{
        stack[++top] = value;
        printf("%d pushed into stack\n",value);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow! cannot pop\n");
    }else{
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements are:\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int choice, value;

    while(1){
        printf("\nStack operation:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter value to push: ");
                scanf("%d",&value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}