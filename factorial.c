#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("\n Enter the number :" );
	scanf("%d",&n);
    
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("\n factorial of the number is :%d",fact );
	}
	return 0;
} 
