#include<stdio.h>

int OriginalElement(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int searchElement(int arr[],int n,int key){
    for(int i = 0; i<n ;i++){
        if(arr[i] == key){
            printf("Element at index : %d",i);
        }
    }
}
int main(){

    int arr[20] = {23, 47, 89, 12, 65, 34, 78, 91, 56, 28,73, 44, 67, 10, 99, 31, 85, 62, 19, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("original element are : ");
    OriginalElement(arr,n);

    int key;
    printf("Enter element for searching : ");
    scanf("%d",&key);

    searchElement(arr,n,key);

}