#include<stdio.h>
void Addition(); //function declaration
int main()
{
	int i,n;
	printf("\n Enter the limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    Addition(); //function call
	return 0;
}
void Addition() //function defination
{
	int n1,n2;
	printf("\n Enter the first number :");
	scanf("%d",&n1);
	printf("\n Enter the second number :");
	scanf("%d",&n2);
	printf("\n sum is : %d",n1+n2);
}
	

