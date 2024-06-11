#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("\ngreater than %d",a>b);
	printf("\nless then %d",a<b);
	printf("\ngreater than or equal %d",a>=b);
	printf("\nless than or equal %d",a<=b);
	printf("\nequal to %d",a==b);
	printf("\nnot equal to %d",a!=b);
	getch();
}
