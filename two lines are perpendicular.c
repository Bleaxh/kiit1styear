#include<stdio.h>
int main() 
{
    int x1,x2,y1,y2,m1,m2;
    printf("Enter the value of x1 \n ");
    scanf("%d" , &x1);
    printf("\n Enter the value of y1 \n ");
    scanf("%d" , &y1);
    printf("\n Enter the value of x2 \n ");
    scanf("%d" , &x2);
    printf("\n Enter the value of a y2 \n");
    scanf("%d" , &y2);
    m1=y1/x1;
    m2=y2/x2;
    printf(" \n Display the value 1: %d \n",m1 * m2 * (-1) );
    return 0;
}
