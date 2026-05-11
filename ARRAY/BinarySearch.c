#include<stdio.h>

int BinarySearch(int arr[],int n,int element){
    int left = 0,right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] > element){
            right = mid - 1;
        }else{
            left = mid + 1;
                }
    }
    return - 1;
}

int printAllElement(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){

    int arr[20] = {10,12,19,23,28,31,34,44,47,54,56,62,65,67,73,78,85,89,91,99};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Element are : ");
    printAllElement(arr,n);

    int element;
    printf("Enter element for searching : ");
    scanf("%d",&element);

    int result = BinarySearch(arr,n,element);
    if(result != -1){
        printf("Element %d found at index %d",element,result);
    }
}