#include<stdio.h>
#include<math.h>
int main()                      
{
   int i, n, t;
   float d, u, a;
   printf("\nEnter the no. of intervals\n");
   scanf("%d", &n);
   for(i = 1; i <= n; i=i+1)
   {
      printf("\ninterval: %d \n", i);
      printf("Enter the time in seconds \n");
      scanf("%d", &t);
      printf("Enter the velocity \n");
      scanf("%f", &u);
      printf("Enter the acceleration \n");
      scanf("%f", &a);
      d= d + (u * t + (a * (pow(t, 2))) / 2);
      printf("Total distance travelled is  %.2f", d);
   }
   return 0;
}  