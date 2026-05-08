#include<stdio.h>

void OriginalArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int DeletionArray(int arr[],int n,int index){

    if(index > n || index < 0){
        printf("Invalid index\n");
    }

    for(int i = index; i < n - 1;i++){
        arr[index] = arr[i + 1];
    }
    n--;
    return n;
}
int main(){

    int arr[] = {12,34,56,78,90};
    int n = 5;

    printf("Original array : ");
    OriginalArray(arr,n);

    int index;

    printf("Enter value for delete : ");
    scanf("%d",&index);
    printf("After deletion : ");
    n = DeletionArray(arr,n,index);
    OriginalArray(arr,n);

}