#include<stdio.h>
int test();
int main()
{
	test();
	test();
	test();
	return 0;
}
int test()
{
	static int a=1;
	printf("\n value of a : %d",a);
	a++;
}
