#include<stdio.h>
int main()
{ 
    float P,Q,R,S;
    printf("The value of P,Q,R,S : ");
    scanf("%f%f%f%f",&P,&Q,&R,&S);

    if (P*S==Q*R)
    {
        printf("\n If Wheatstone is balanced ");
        return 0;
    }  
    printf("If the wheatstone bridge is not balanced \n");
    S=R*Q/P;
    printf("\nS = %f ",S);
    return 0;
}  