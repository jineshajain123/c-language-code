#include<stdio.h>
int main()
{
    int arr[]={12,28,34,45,56};
    int i;
    printf("enter a number :\n");
    for(i=0;i<5;i++)
    {
    	printf("%d \n",arr[i]);
	}
	//array element sum
	int sum=0;
	for (i=0;i<5;i++)
	{
		sum=sum+arr[i];
		printf("sum is :%d\n",sum);
		}
}
