#include<stdio.h>

void OriginalArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

void InsertionSort(int arr[],int n){
    for(int i = 0; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){

    int arr[] = {12,10,34,21,78,76,8,34,56,32,44,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : ");
    OriginalArray(arr,n);
    printf("After sorted Array : ");
    InsertionSort(arr,n);
    OriginalArray(arr,n);
}