#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("\nenter the value of x:");
	scanf("%d",&x);
	printf("\nenter the value of y:");
	scanf("%d",&y);
	printf("\n AND: %d",(x>y && x==y));//x is greater
	printf("\n OR: %d",(x<y || x!=y));//y is greater
	printf("\n NOT %d",!(x==y));//equal to
	printf("\n AND NOT %d",!(x>y && x>=y));//x is greater or equal to
	printf("\n OR NOT %d",!(x==y || x!=y));//x! is not true
	printf("\n AND OR NOT %d",!((x>y && x<y) || !(x)));//! mean opposite
	getch();
}
