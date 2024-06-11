#include<stdio.h>
int main()
{
	int n;
    printf("enter the age:");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("person is eligible for vote");
	}
	else
	{
		printf("person is not eligible for vote");
	}
	return 0;
}
	
