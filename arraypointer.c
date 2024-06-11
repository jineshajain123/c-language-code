#include<stdio.h>
void main()
{
    int arr[]={12,34,56,78,90};
    int i;
    //int *ptr=&arr[0];
    int *ptr=arr;
    printf("enter array element :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
        //ptr++; //(ptr+i)
    }
    ptr=arr;
    printf("arr element are :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
        //ptr++;
    }
}
