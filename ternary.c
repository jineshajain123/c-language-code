#include<stdio.h>
int main()
{
	int a,b;//res; 
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	//res=(a>b)a:b;
	//printf("%d is largest:",res);
	(a>b)? printf("a is largest"):printf("b is largest");
	return 0;
	
}
