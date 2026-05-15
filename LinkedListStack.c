#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;
void push(int value){
    struct node * NewNode = (struct node *)malloc(sizeof(struct node));
    if(!NewNode){
        printf("Heap overflow !\n");
    }
    NewNode->data = value;
    NewNode->next = top;
    top = NewNode;
    printf("%d is push into stack",value);
}
void pop(){
    if(top == NULL){
        printf("Stack is empty\n");
    }else{
        struct node * temp = top;
        printf("%d element is popped\n",temp->data);
        top = top->next;
        free(temp);
    }
}
void peek(){
    if(top == NULL){
        printf("Stack is empty \n");
    }else{
        printf("Top element is %d" ,top->data);
    }
}
void display(){
    if(top == NULL){
        printf("No element exist\n");
    }else{
        struct node * temp = top;
        while(top != NULL){
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