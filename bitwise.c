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
		printf("\n bitwise AND:%d",a&b);
		printf("\n bitwise OR:%d",a|b);
		printf("\n bitwise NOT:%d",~a);
		printf("\n bitwise XOR:%d",a^b);
		printf("\n bitwise Left shift:%d",a<<1);
		printf("\n bitwise Right shift:%d",a>>1);
	}
	getch();
}
