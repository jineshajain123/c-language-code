#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
    int sum,a=3,b=4;
    
	add(3,4);
	printf("sum is:%d\n",add(3,4));
	
	/*sum=add(a,b);
    printf("sum is:%d\n",add(1,3));*/
}
