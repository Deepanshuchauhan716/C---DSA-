#include<stdio.h>

int Display(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int InsertPosition(int arr[],int n,int pos,int x){
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = x;
    n++;
    return n;
}

int main(){
    int arr[10] = {1,2,3,4,5};
    int n = 5;
    n = InsertPosition(arr,n,3,12);
    Display(arr,n);
}