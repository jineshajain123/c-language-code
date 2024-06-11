// Wap to print sum of individual digit of 3 digit number

#include<stdio.h>
int main()
{
	int num,a,b,c,sum;
	printf("enter the 3 digit number:\n");
	scanf("%d",&num);
	
	a=(num/100);
	b=(num/10) % 10;
	c=(num % 10);
	sum=a+b+c;
	printf("sum of 3 digit number= %d",sum);
}
