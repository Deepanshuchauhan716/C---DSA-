// insertoin at specific position

#include<stdio.h>

int printelement(int arr[],int n){
     printf("Original array are : " );
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int InsertionPosition(int arr[],int n,int new_element,int position){

    if(position < 0 || position > n){
        printf("Invalid position\n");
    }

    for(int i = n; i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = new_element;
    n++;

    return n;
}
int main(){

    int arr[10] = {34,54,32,56,78};

    int n = 5;

   printelement(arr,n);

    int new_element;
    printf("Enter new element : ");
    scanf("%d",&new_element);

    int position;
    printf("Enter position : ");
    scanf("%d",&position);

    printf("After Insertion : ");
     n = InsertionPosition(arr,n,new_element,position);
    printelement(arr,n);
    
}