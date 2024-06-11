#include<stdio.h>
int main()
{
	int a,b,c; 
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	(a>b&&a>c)?printf("a is gretest") : (c<b)?printf("b is gretest") :printf("c is gestest");
	
}
