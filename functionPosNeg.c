#include<stdio.h>
void num();

void num()
{
	int n;
	printf("enter a number :\n ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive",n);
	}
	else
	{
		printf("%d is negetive",n);
	}
}
void main()
{
	num();
}

