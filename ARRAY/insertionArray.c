#include<stdio.h>

int PrintElement(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int InsertionAtEnd(int arr[],int n,int new_element){

    arr[n] = new_element;
    n++;
    return n;
}
int main(){

    int arr[10] = {12,34,56,78,90};
    int n = 5;

    printf("Original element are : ");
    PrintElement(arr,n);
    int new_element;
    printf("Enter new element : ");
    scanf("%d",&new_element);
    printf("After insertion at end : ");
    n = InsertionAtEnd(arr,n,new_element);
    PrintElement(arr,n);

}