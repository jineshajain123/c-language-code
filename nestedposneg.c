#include<stdio.h>
int main()
{
	int n;
    printf("enter the number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\nnumber is zero");
	}
	else if(n>0)
	{
		printf("\nnumber is positive");
		if(n%2==0)
		{
			printf("\neven number");
		}
		else
		{
			printf("\nodd number");
		}
	}
	else
	{
		printf("\nnumber is negetive");
		if(n%2==0)
		{
			printf("\neven number");
		}
		else
		{
			printf("\nodd number");
		}
	}
	
}
