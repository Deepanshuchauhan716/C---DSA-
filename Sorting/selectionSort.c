#include<stdio.h>

void OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int SelectionSort(int arr[],int n){
    for(int i = 0; i < n ;i++){
        int MinIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[MinIndex]){
                MinIndex = j;
            }
        }
        int temp = arr[MinIndex];
        arr[MinIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {42, 7, 19, 88, 3, 56, 21, 90, 14, 67, 1, 35, 72, 9, 50, 28, 61, 11, 84, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array : ");
    OriginalArray(arr,n);
    SelectionSort(arr,n);
     OriginalArray(arr,n);

}