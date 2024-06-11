#include<stdio.h>
void main()
{
    int i;
    int arr[5];
	printf("enter array element :\n");
    for(i=0;i<5;i++)
    {
    	printf("enter array element position %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("array element are:\n"); 
	for(i=0;i<5;i++)
	{
	    printf("%d \n",arr[i]);
	}
	
	int sum=0;
	for(i=0;i<5;i++)
	{	
		sum=sum+arr[i];
	}
	printf("sum is :%d",sum);
	
}
