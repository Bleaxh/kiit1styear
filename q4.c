#include <stdio.h>

int largest(int *a, int n){
    int largest = 0;
    for(int i = 0; i < n; i++){
        if(largest<a[i])
            largest = a[i];
    }
    return largest;
}

void main(){
    int n;
    printf("Enter the number of values you want to compare: \n");
    scanf("%d", &n);
    int x[n];
    printf("Enter the numbers: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    printf("Largest number is: %d\n",largest(x, n));
}