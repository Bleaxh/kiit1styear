#include <stdio.h>

void multi_function(int *a, int n, int *largest, int *smallest, int *count){
    for(int i = 0; i < n; i++){
        if(*largest<a[i])
            *largest = a[i];
    }
    for(int i = 0; i < n; i++){
        if(*smallest>a[i])
            *smallest = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i]%2)
            *count+=1;
    }
}

void main(){
    int n, largest = 0, smallest, count = 0;
    printf("Enter the number of values you want to compare: \n");
    scanf("%d", &n);
    int x[n];
    printf("Enter the numbers: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }
    smallest = x[0];
    multi_function(x, n, &largest, &smallest, &count);
    printf("Largest number is: %d\nSmallest number is: %d\nNumber of Odd Number is: %d\n",largest, smallest, count);
}