#include<stdio.h>

void main(){
    int arr[20];
    for(int i = 0; i<20; i++){
        printf("Enter your input: ");
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<20; i++){
        printf("Element %d: %d\n", i, arr[i]);
    }
}