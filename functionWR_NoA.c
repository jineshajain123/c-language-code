// function with return type but no arguement
#include<stdio.h>
int add()
{
	int a,b,c;
	printf("enter two values :");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	return c;
}
void main()
{
    int sum;
	sum=add();
	printf("sum is:%d\n",sum);
}
