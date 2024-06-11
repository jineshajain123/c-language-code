#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	printf("\n Enter array element : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		printf("\n sorted array:\n");
		for(i=0;i<10;i++)
		{
			printf("\t%d",a[i]);
		}
	}	
	
	return 0;
}
