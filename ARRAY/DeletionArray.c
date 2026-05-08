#include<stdio.h>

void OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int DeletionAtBegin(int arr[],int n){

    for(int i = 0; i < n; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
}

int main(){

    int arr[] = {12,34,56,78,90};
    int n = 5;

    printf("Original array : ");
    OriginalArray(arr,n);

    printf("After deletion : ");
    n = DeletionAtBegin(arr,n);
    OriginalArray(arr,n);

}