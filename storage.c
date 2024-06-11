#include<stdio.h>
int a=100;
int main()
{
	int a=20;
	{
		int a=30;
		printf("\n In block : %d",a);
	}
	printf("\n In a function : %d",a);
	return 0;
}
