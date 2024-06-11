//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;
    int n1;
    printf("enter size of dynamic array :");
    scanf("%d",&n);
    int *temp;
    int *ptr=(int*)calloc(n,sizeof(int));
    temp=ptr;
    printf("array address are :");
    for(i=0;i<n;i++)
    {
        printf("%d \n",ptr);
        ptr++;
    }
    ptr=temp;
    printf("enter size of new incresing dynamic array:\n");
    scanf("%d",&n1);
    int *newptr=(int*)realloc(ptr,n1*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d ",newptr);
        newptr++;
    }
    free(temp);

}