#include<stdio.h>
int main()
{
	int x=0,y=1,n,i=2,z;
	printf("\n Enter any number :\n");
	scanf("%d",&n);
	printf("\n fabbonacci seroius :\n");
	printf("%d\n%d",x,y);
	while(i<n)
	{
		z=x+y;
		printf("\n%d",z);
		x=y;
		y=z;
		i=i+1;
	}
	return 0;
	
}
