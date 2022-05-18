#include<stdio.h>
#include<math.h>
#define g 9.8
#define pi 3.14
int main()                      
{
   int  l;
   float t;
   
   for(l = 10; l <= 50; l=l+10)
   {
      printf("\n Enter the length in meters : ");
      scanf("%d", &l);
      t= 2*pi*sqrt(l/g);
      printf(" Time period is  %f", t);
   }
   return 0;
}  