//wap to reverse five digit number using if else
#include<stdio.h>
void main()
{
	int num,a,b,c,d,e,rev;
	printf("enter the five digit number :");
	scanf("%d",&num);
	
	a= num/10000;
	b= (num/1000)%10;
	c= (num/100)%10;
	d= (num/10)%10;
	e= num%10;
	rev= e*10000+d*1000+c*100+b*10+a;
	printf("Reverse number : %d",rev);
	
}
