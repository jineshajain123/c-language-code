#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	{
		printf("\naddition :%d + %d = %d",a,b,a+b);
	    printf("\nsubtraction:%d - %d = %d",a,b,a-b);
	    printf("\nmultiplication :%d * %d = %d",a,b,a*b);
	    printf("\ndivision :%d / %d = %d",a,b,a/b);
    }
	getch();
}
