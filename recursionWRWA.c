//real recursion
#include<stdio.h>
int factorial(int num)
{
	if(num==0)
	return 1;
	   //or(else)
	return num*factorial(num-1);
}
void main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    printf("factorial of %d = %d",n,factorial(n));
}
