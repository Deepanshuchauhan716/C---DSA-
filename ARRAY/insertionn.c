#include<stdio.h>

void OriginalArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){

    int arr[] = {12,34,56,78,90};
    int n = 5;

    printf("Original Array : ");
    OriginalArray(arr,n);
}