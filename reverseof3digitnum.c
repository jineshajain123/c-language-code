//wap to reverse three digit number using if else
#include<stdio.h>
void main()
{
	int num,a,b,c,rev;
	printf("enter the three digit number :");
	scanf("%d",&num);
	
	a= num/100;
	b= (num/10)%10;
	c= num%10;
	rev= c*100+b*10+a;
	printf("Reverse number : %d",rev);
	
}
