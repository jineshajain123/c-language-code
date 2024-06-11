#include<stdio.h>
int main()
{
    int num;
    printf("enter the number between 1-7 :\n");
    scanf("%d",&num);

    if(num==1)
    {
        printf("\n MONDAY");
    }
    else if (num==2)
    {
        printf("TUESDAY");
    }
    else if (num==3)
    {
        printf("WEDNESDAY");
    }
    else if (num==4)
    {
        printf("THUSDAY");
    }
    else if (num==5)
    {
        printf("FRIDAY");
    }
    else if (num==6)
    {
        printf("SATURDAY");
    }
    else if (num==7)
    {
        printf("SUNDAY");
    }
    else 
    {
        printf("Not a Day please enter the number between 1-7");
    }
}