#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter stop limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
			sum=sum+i;
		}
		
	}
	printf("\n sum of even number : %d",sum);
	return 0;
}
