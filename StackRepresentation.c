#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;

int push(int value){
    if(top == MAX - 1){
        printf("Stack is overflow !\n");
    }else{
        stack[++top] = value;
        printf("%d is push into stack !",value);
    }
}

int pop(){
  if(top == -1){
    printf("Stack is empty !\n");
 }else{

    printf("%d popped from the stack : ",stack[top--]);
 }
}
int peek(){
    if(top == -1){
    printf("Stack is empty !\n");
 }else{
    printf("The top element are %d \n",stack[top]);
 }
}
int display(){
    if(top == -1){
    printf("Stack is empty !\n");
    }else{
        printf("The stack element are : ");
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