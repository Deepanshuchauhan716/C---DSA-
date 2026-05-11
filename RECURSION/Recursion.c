#include<stdio.h>

void print(int n){

    if(n > 5){      // Base case
        return;
    }

    printf("%d\n", n);

    print(n + 1);   // Recursive call
}

int main(){

    print(1);

    return 0;
}