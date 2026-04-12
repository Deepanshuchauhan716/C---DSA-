#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;

void push(int value){
    struct node * Newnode = (struct node *)malloc(sizeof(struct node));
    if(Newnode == NULL){
        printf("Heap overflow !");
        return;
    }
    Newnode->data = value;
    Newnode->next = top;
    top = Newnode;
    printf("%d pushed into the stack \n",value);
}

void pop(){
    if(top == NULL){
        printf("Stack underflow !");
    }else{
        struct node * temp = top;
        printf("%d popped from the stack \n",temp->data);
        top = top->next;
        free(temp);
    }
}

void peek(){
    if(top == NULL){
        printf("Stack is empty\n");
    }else{
        printf("Top element is %d",top->data);
    }
}

void display(){

    struct node * temp = top;
    if(top == NULL){
        printf("Stack is empty\n");
    }else{
        printf("Stack element : ");
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
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