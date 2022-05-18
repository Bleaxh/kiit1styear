#include<stdio.h>
int main()
{
    int p,b,h;
    printf("Enter the value of p : ");
    scanf("%d" , &p);
    printf("\n Enter the value of b : ");
    scanf("%d" , &b);
    printf("\n Enter the value of h : ");
    scanf("%d" , &h);
    int t ;  
    t= h*h - (p*p + b*b) ;
    printf("\n Display the value of t '0' if right angled traingle : %d ", t);
    return 0;
}    