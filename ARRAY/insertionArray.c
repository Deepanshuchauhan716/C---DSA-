#include<stdio.h>

void PrintElemnt(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int InsertioAtBegin(int new_element,int n,int arr[]){
    for(int i = n; i > 0;i--){
        arr[i] = arr[i - 1];
         }
         arr[0] = new_element;
         n++;
}
int main(){

    int arr[10] = {12,34,56,78,90};
    int n = 5;

    printf("Original Array are : ");
    PrintElemnt(arr,n);
    int new_element;

    printf("Enter new element Insert at begin : ");
    scanf("%d",&new_element);

    InsertioAtBegin(new_element,n,arr);
    printf("After Insertion in array : ");
    PrintElemnt(arr,n);

  
}