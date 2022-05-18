#include <stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("The value of bs,hra,da : ");
    scanf("%f%f%f%f",&bs,&hra,&da );
    if (bs<1500)
    {
        hra=10/100*bs;
        da=40/100*bs;
        printf("The value of hra = %f \n",hra);
        printf(" \n The value of da = %f",da);
           
    }
    else
    {
        hra=500;
        da=50/100*bs;
        printf("The value of hra = %f \n",hra);
        printf(" \n The value of da = %f",da );
        
    }    
    gs=bs+hra+da;
    printf("\n The value of the total gross salary=%f ",gs);
    return 0;
}    
