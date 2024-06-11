//function without arguement and with return type
#include<stdio.h>
int Addition(); //function declaration
int main()
{
	int add;
	add=Addition();
    printf("\n sum is : %d",add); //function call
	return 0;
}
int Addition() //function defination
{
	int n1,n2,add,res;
	printf("\n Enter the first number :");
    scanf("%d",&n1);
	printf("\n Enter the second number :");
	scanf("%d",&n2);
	res=n1+n2;    
	return res;
}
	
