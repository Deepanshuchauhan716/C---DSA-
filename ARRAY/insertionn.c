#include<stdio.h>

void OriginalArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertion(int arr[],int n,int position, int value){

    if(position > n || position < 0){
        printf("Invalid position\n");
    }

    for(int i = n ;i  > position ;i--){
        arr[i + 1] = arr[i];
    }

    arr[position] = value;
    n++;
    return n;
}

int main(){

    int arr[10] = {12,34,56,78,90};
    int n = 5;

    printf("Original Array : ");
    OriginalArray(arr,n);

    int position, value;
    printf("Enter value : ");
    scanf("%d",&value);

    printf("Enter position : ");
    scanf("%d",&position);
    
    n = insertion(arr,n,position,value);
    printf("After Insertion : ");

    
    OriginalArray(arr,n);
}