#include<stdio.h>
int main()
{
    int num;
    printf("enter the number :\n");
    scanf("%d",&num);

    if(num<100)
    {
        printf("number is less than 100");
    }
    else if (num>100)
    {
        printf("number is greater than 100");
    }
    else
    {
        printf("number is equal to 100");
    }
}
    