#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter stop limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(i%2==0)//for even
		{
			printf("\n %d",i);
		}
	}  
	/*if (i%2!=0) //for odd 
	{
		printf("\n %d",i);
		sum=sum+i;
	}*/
	
	return 0;
}
