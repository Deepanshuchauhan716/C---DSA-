#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front = -1,tail = -1;

int Isempty(){
    return (front == -1); 
}

int IsFull(){
    return(tail == SIZE - 1);
}

void push(int value){
    if(IsFull()){
        printf("Queue overflow !");
        return;
    }if(front == -1){
    front = 0;
} 
    queue[++tail] = value;
    printf("Value %d push on stack\n",value);

        
}

void pop(){
    if(Isempty()){
        printf("Queue is empty\n");
        return;
    }
    
    if(front == tail){
        front = tail = -1;
    }else{
        front++;
    }

}

void display(){
    printf("Queue elements are : ");
    for(int i = front; i <= tail; i++){
        printf("%d ",queue[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
display();
pop();
display();
return 0;

}