#include<stdio.h>

int OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){

    int arr[] = {12,1,34,32,45,67,54,33,56,90,65};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array : ");
    OriginalArray(arr,n);
}