// no return type but with arguement
#include<stdio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum is: %d\n ",c);
	
}
void main()
{
	int x=2,y=3;
	add (x,y);
	//add(2,3);
}
