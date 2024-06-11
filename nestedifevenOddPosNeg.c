#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        if(num>0)
        {
            printf("number is even-positive");
        }
        else
        {
             printf("number is even-negtive");
        }
    }
    else 
    {
        if(num<0)
        {
            printf("number is odd-negtive");
        }
        else
        {
             printf("number is odd-positive");
        }
    }
}