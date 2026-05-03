#include<stdio.h>

int OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int SelectionSort(int arr[],int n){
    for(int i = 0; i < n - 1; i++){
        int MidIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[MidIndex]){
                MidIndex = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[MidIndex];
        arr[MidIndex] = temp;
    }
}

int main(){

    int arr[] = {12,1,34,32,45,67,54,33,56,90,65};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array : ");
    OriginalArray(arr,n);
    printf("After Sorted array : ");
    SelectionSort(arr,n);
}