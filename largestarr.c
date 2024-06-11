#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("\n enter size of array");
	scanf("%d",&n);
	printf("\n enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("\n largest number : %d",a[0]);
	return 0;
}
	
