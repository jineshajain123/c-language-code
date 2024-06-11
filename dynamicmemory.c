//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    printf("enter size of dynamic array :");
    scanf("%d",&n);
    int *temp;
    int *ptr=(int*)malloc(n*sizeof(int));
    temp=ptr;
    printf("enter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=temp;
    printf("enter array element :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    ptr=temp;
    free(ptr);

}