#include<stdio.h>
int main()
{
	int s,n,i;
	printf("\n enter start character : ");
	scanf("%c",&s);
	printf("\n enter stop character :");
	scanf("%c",&n);
	i=s;
	while(i<=n)
	{
		printf("\n%c",i);
		i++;
	}
	return 0;
}
