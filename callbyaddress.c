//call by address
#include<stdio.h>
void swap(int *a, int *b); //function declaration
int main()
{
	int x,y;
	printf("\n Enter the value of x:");
	scanf("%d",&x);
	printf("\n Enter the value of y:");
	scanf("%d",&y);

	
	swap(&x,&y);
	printf("\n\n after function call:\n");
	printf("\n value of x: %d",x);
	printf("\n value of y: %d",y);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	printf("\n In swap function :\n");
	printf("\n value of a: %d",*a);
	printf("\n value of b: %d",*b);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n after swapping:\n");
	printf("\n value of a: %d",*a);
	printf("\n value of b: %d",*b);
}
