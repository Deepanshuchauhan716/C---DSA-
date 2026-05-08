// Insetion at begining

#include<stdio.h>

void OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int InsertAtBegin(int arr[],int n,int value){

    for(int i = n; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    return n;
}

int main(){

    int arr[] = {12,34,56,78,90};
    int n = 5;

    printf("Original array : ");
    OriginalArray(arr,n);

    int value;

    printf("Enter value : ");
    scanf("%d",&value);

    n = InsertAtBegin(arr,n,value);
    printf("After insertion : ");
    OriginalArray(arr,n);
}