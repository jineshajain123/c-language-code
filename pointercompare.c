#include<stdio.h>
void main()
{
    int a=12;
    int *ptr,**dp;//double pointer
    ptr=&a;
    dp=&ptr;
    printf("%d %d %d %d %d %d %d %d",a,&a,ptr,*ptr,&ptr,dp,*dp,**dp);
    //a= *ptr ,**dp
    //&a= ptr ,*dp
    //&ptr=dp

}