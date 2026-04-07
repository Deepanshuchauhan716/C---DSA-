#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    if(ptr == NULL){
        printf("Memory Allocation failed\n");
        return 1;
    }

    for(int i = 0; i < 5; i++){
        ptr[i] = i * 10;
    }

    printf("Allocated memory(malloc):");
    for(int i = 0; i < 5 ; i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
}