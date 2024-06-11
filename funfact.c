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
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

