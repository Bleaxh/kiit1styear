#include<stdio.h>
int main(
{
    int S.NO;
    printf("The value of S.NO. : ");
    scanf("%d",&S.NO);
    if(S.NO==1)
    {
        printf("PO = At infinity");
        printf("PI = At the focus F");
        printf("SI = Highly Diminished");
        printf("NI = Real and inverted ");
    }
    else if(S.NO==2)
    {
        printf("PO = Beyond the center of curveture C");
        printf("PI = Between F and C");
        printf("SI = Diminished");
         printf("NI = Real and inverted ");
    }    
    else if(S.NO==3)
    {
        printf("PO = At the centre of curvature C");
        printf("PI = At C");
        printf("SI = Same Size");
        printf("NI = Real and inverted ");
    }    
    else if(S.NO==4)
    {
        printf("PO = Between C and F");
        printf("PI = Beyond C ");
        printf("SI = Enlarged");
        printf("NI = Real and inverted ");
    }  
    else(S.NO==5)
    {
        printf("PO = At focus F");
        printf("PI = At Infinity");
        printf("SI = Highly Enlarged");
        printf("NI = Real and inverted ");
    } 
    return 0;
}          