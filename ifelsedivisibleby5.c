#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%5==0)
	{
	    printf("%d is divisible by 5");	
	}
	else 
	{
		printf("%d is not divisible by 5");
	}

}
