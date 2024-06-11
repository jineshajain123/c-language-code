#include<stdio.h>
int main()
{
	int i;
	for (i=0;i<=10;i++)
	{
		if(i==5)
		{
			goto xyz;
		}
		printf("\n %d",i);
	}
	xyz:
		printf("\n this is goto statement");
	return 0;
}
