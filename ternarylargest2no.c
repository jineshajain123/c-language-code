#include<stdio.h>
void main()
{
	int a,b, res;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	res=(a>b)? a:b;
	printf("largest number is: %d",res);
	getch();
	
}
