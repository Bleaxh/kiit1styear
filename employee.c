#include<stdio.h>
struct employee
{
    char name;
    char gender;
    char designation;
    char department;
    float basic pay;
    float da;
    float hr;

}; 






int main() 
{
   int gross pay, basic pay, da, Hr;
 
   printf("Enter basic pay : ");
   scanf("%d", &basic pay);
 
   da = (75 * basic pay) / 100;
   hr = (25 * basic pay) / 100;
 
   gross pay = basic pay + da + Hr;
 
   printf("\nGross salary : %d", gross pay);
   return (0);
}