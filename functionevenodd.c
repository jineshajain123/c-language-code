#include<stdio.h>
void num();

void num()
{
	int n;
	printf("enter a number :\n ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}
void main()
{
	num();
}

