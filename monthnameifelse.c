#include<stdio.h>
int main()
{
    int num;
    printf("enter the number between 1-12 :\n");
    scanf("%d",&num);

    if(num==1)
    {
        printf("\nJANUARY");
    }
    else if (num==2)
    {
        printf("FEBRUAY");
    }
    else if (num==3)
    {
        printf("MARCH");
    }
    else if (num==4)
    {
        printf("APRIL");
    }
    else if (num==5)
    {
        printf("MAY");
    }
    else if (num==6)
    {
        printf("JUNE");
    }
    else if (num==7)
    {
        printf("JULY");
    }
    else if (num==8)
    {
        printf("AUGUST");
    }
    else if (num==9)
    {
        printf("SEPTEMBER");
    }
    else if (num==10)
    {
        printf("OCTOBER");
    }
    else if (num==11)
    {
        printf("NOVEMBER");
    }
    else if (num==12)
    {
        printf("DECEMBER");
    }
    
    else 
    {
        printf("Not a Month please enter the number between 1-12");
    }
}