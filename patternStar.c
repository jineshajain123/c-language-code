#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=5;i++) //outerloop
	{
		for(j=1;j<=5;j++)//innerloop
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
