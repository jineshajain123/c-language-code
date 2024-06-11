//wap to reverse four digit number using if else
#include<stdio.h>
void main()
{
	int num,a,b,c,d,rev;
	printf("enter the four digit number :");
	scanf("%d",&num);
	
	a= num/1000;
	b= (num/100)%10;
	c= (num/10)%10;
	d= num%10;
	rev= d*1000+c*100+b*10+a;
	printf("Reverse number : %d",rev);
	
}
