#include<stdio.h>
#include<math.h>
#define g 9.8
#define pi 3.14
int main()                      
{
   int i, n, l;
   float t;
   printf("\nEnter the no. of intervals\n");
   scanf("%d", &n);
   for(i = 1; i <= n; i=i+1)
   {
      printf("\ninterval: %d \n", i);
      printf("Enter the length in meters \n");
      scanf("%d", &l);
      t= 2*pi*sqrt(l/g);
      printf("Time period is  %.2f", t);
   }
   return 0;
}  