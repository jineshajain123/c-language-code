#include<stdio.h>
void add();
void sub();
void mul();
void div();
void add()
{
    int num1,num2,num3;
    printf("\n enter two numbers :");
    scanf("%d %d",&num1,&num2);
    num3=num1+num2;
    printf("\n add is :%d",num3);
}
void sub()
{
    int num1,num2,num3;
    printf("\n enter two numbers :");
    scanf("%d %d",&num1,&num2);
    num3=num1-num2;
    printf("\n sub is :%d",num3);
}
void mul()
{
    int num1,num2,num3;
    printf("\n enter two numbers :");
    scanf("%d %d",&num1,&num2);
    num3=num1*num2; 
    printf("\n mul is :%d",num3);
}
void div()
{
    int num1,num2,num3;
    printf("\n enter two numbers :");
    scanf("%d %d",&num1,&num2);
    num3=num1/num2;
    printf("\n div is :%d",num3);
}
void main()
{
	printf("\n welcome to my calculator:");
	add();
	sub();
	mul();
    div();
	
}
