#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3,result;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	printf("enter third number:");
	scanf("%d",&num3);
	
	result= num1*num2*num3;
	printf("Multiplication of three numbers :%d",result);
	getch();
	
}
