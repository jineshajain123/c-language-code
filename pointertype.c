//pointer types
//wild pointer 
//null pointer
//dangling pointer
//double pointer-it stores the address of address pointer  

#include<stdio.h>
void main()
{
    int a=56;
    int *ptr; //wild pointer
    int *ptr1=NULL; //null p
    if(ptr1==NULL)
    {
      ptr1=&a;
    }
    printf("value of a is: %d\n",*ptr1);

}