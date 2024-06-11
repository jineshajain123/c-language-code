#include<stdio.h>
void main()
{
    int a=12;
    int*ptr;
    ptr=&a;
    printf("value of a is: %d\n",a);
    printf("address of a :%d\n",&a);
    printf("value of ptr: %d\n",ptr);
    printf("value of ptr: %d\n",*ptr);
    *ptr=56;
    printf("value of a: %d",a);
}
    