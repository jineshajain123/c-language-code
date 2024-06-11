#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers:\n");
	scanf("%d\n%d",&n1,&n2);
	if(n1==n2)
	{
		printf("%d and %d both are equal",n1,n2);
	}
	else
	{
		printf("%d and %d both are not equal",n1,n2);
	}
}
