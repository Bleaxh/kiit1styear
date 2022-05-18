#include<stdio.h>
int main()
{
	int p,c,m,e,b;
	float avg;
	printf("Enter value of all the five subjects:");
	scanf("%d%d%d%d%d",&p,&c,&m,&e,&b);
    avg=(p+c+m+e+b+4.9)/5;
	printf("Average of five subjects:%f",avg);


	
	if (avg>59)
	{
		printf("Grade A");
		
	}
	else if(avg>49)
	{
		printf("Grade B");
	}
	else if(avg>39)
	{
		printf("Grade C");
	}
	if(avg<40)
	{
		printf("Fail");
	}
	return 0;
}
