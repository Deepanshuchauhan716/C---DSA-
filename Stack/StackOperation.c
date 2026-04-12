#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top = -1;

void push(int value){
    if(top == MAX - 1){
        printf("Stack overFlow cannot push\n");
    }else{
        stack[++top] = value;
        printf("%d pushed into stack.\n",value);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow ! Cannot Push\n");
    }else{
        printf("%d popped from the stack \n",stack[top--]);
    }
}

void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Top element is %d",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack element is : ");
        for(int i = top; i >= 0; i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice,value;
    while(1){
        printf("Stack operation\n");
        printf(" 1 => Push element\n 2 => Pop element\n 3 => Peek\n 4 => display element\n 5 => exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter value : ");
            scanf("%d",&value);
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            exit(0);
            break;

            default:
            printf("Invalid Choice !");
        }
    }
}