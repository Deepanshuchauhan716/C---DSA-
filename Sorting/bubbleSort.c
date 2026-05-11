#include<stdio.h>

void OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int BubbleSort(int arr[],int n){
    for(int i = 0; i < n - 1; i++){
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

    int arr[] = {42, 7, 19, 88, 3, 56, 21, 90, 14, 67, 1, 35, 72, 9, 50, 28, 61, 11, 84, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : ");
    OriginalArray(arr,n);
    printf("After sorted : ");
    BubbleSort(arr,n);
    OriginalArray(arr,n);
}