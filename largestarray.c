#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("\n enter the size of array : ");
	scanf("%d",&n);
	printf("\n Enter array elements : \n");
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
	printf("largest number : %d",a[0]);
	
	return 0;
}
