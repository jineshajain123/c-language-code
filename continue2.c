#include<stdio.h>
int main()
{
	int i;
	for (i=0;i<=10;i++)
	{
		if(i>5 && i<8)
		{
			continue;
		}
		printf("\n %d",i);
	}
	return 0;
}
