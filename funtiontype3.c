//function with arguement and without return type
#include<stdio.h>
void Addition(int n1,int n2); //function declaration(formal arguement)
int main()
{
	int n1,n2;//actual arguement
	printf("\n Enter the first number :");
	scanf("%d",&n1);
	printf("\n Enter the second number :");
	scanf("%d",&n2);
	Addition(n1,n2); //function call
	return 0;
}
void Addition(int n1,int n2) //function defination
{
	printf("\n sum is : %d",n1+n2);
}

	

