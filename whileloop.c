#include<stdio.h>
int main()
{
	int n,s,i;
	printf("\n enter start limit :");
	scanf("%d",&s);
	printf("\n enter stop limit :");
	scanf("%d",&n);
	i=s;
	while (i>=n)
	{
		printf("\n %d",i);
		i--;
	}
	return 0;
}
