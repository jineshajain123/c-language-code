#include<stdio.h>
int main()
{
    int arr[5],i;
    
    printf("size of array = %d\n",sizeof(arr));
    for(i=0;i<5;i++)
    {
    	printf("%d\n",&arr[i]);
	}
}
