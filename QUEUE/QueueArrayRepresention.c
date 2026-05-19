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

int push(int value){
    if(IsFull()){
        printf("Queue overflow !");
        return;
    }if(front == -1){
    front = 0;
    queue[++tail] = value;
    printf("Value %d push on stack\n",value);
} 
        
}

int pop(){
    if(Isempty()){
        printf("Queue is empty\n");
    }if(front == tail){
        front = tail = -1;
    }else{
        front++;
    }
}

int display(){
    
}
int main(){

}