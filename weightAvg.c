//Write a  program that accepts two item's weight and number of purchase and calculates their Weight average value.
#include<stdio.h>
void main()
{
	float w1,w2,avg;
	int n1,n2;
	printf("enter the item's weight :\n");
	scanf("%f",&w1);
	printf("enter the item's number :\n");
	scanf("%d",&n1);
	printf("enter the item's weight :\n");
	scanf("%f",&w2);
	printf("enter the item's number :\n");
	scanf("%d",&n2);
	
	avg= ((w1*n1)+(w2*n2))/(n1+n2);
	printf("the weight avg value of items is : %f",avg);
}
