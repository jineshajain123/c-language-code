#include<stdio.h>
void hello(); //function declaration
int main()
{
	int i;
	for(i=1;i<=10;i++)
	hello(); //function call
	hello();
	return 0;
}

void hello() // function defination 
{
	printf("\n hello everyone!");
	printf("\n this is hello function");
}

