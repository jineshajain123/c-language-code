#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter two numbers:\n");
	scanf("%d  %d",&n1,&n2);
	if(n1<n2) //5 12
	{
		printf("%d is smallest",n1);
	}
	else
	{
		printf("%d is smallest",n2);
	}
}
