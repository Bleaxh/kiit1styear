#include<stdio.h>
int main()
{
    int score,count=1;
    float sum_score=0,avg_score;
    repeat:
    printf("\nEnter the score of the  next player %d: ",count);
    scanf("%d",&score);
    sum_score+=score;
    count++;
    if (count<=11) goto repeat;
    {
        avg_score=sum_score/11;
        printf(" Total score = %f , Average score = %f " ,sum_score,avg_score);
    }    
    return 0;
}

