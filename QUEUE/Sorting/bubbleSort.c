#include<stdio.h>

int OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int BubbleSort(int arr[],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {34,12,45,23,67,54,32};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array : ");
    OriginalArray(arr,n);
    printf("After sorting array : ");
    BubbleSort(arr,n);
}