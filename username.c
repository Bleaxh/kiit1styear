#include<stdio.h>
int main()
{
	char Username;
	int password;
	printf("Enter Username:");
	scanf("%c",&Username);
	printf("Enter password:");
	scanf("%d",&password);
	
	if (Username=='a')
	{
		printf("Login Successful");
	}
	else 
	{
		printf("Incorrect username or password");
	}
	 if (password==1234)
	{
	    printf("Login Successful");	
	}
	
	
	
	return 0;
	
}