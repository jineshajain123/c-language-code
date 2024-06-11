#include<stdio.h>
int fact(int n);
int main()
{ 
	int num,res;
	printf("\n Enter any number :" );
	scanf("%d",&num);
	res=fact(num);
	printf("\n factorial of the number is : %d",res );
	return 0;
}
int fact(int n)
{
	if(n==0)
	    return 1;
    else
        return n*fact(n-1);
}
