#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
    switch(num%2==0)
    {
    	case 0:
    		printf("odd number");
    		break;
    	case 1:
    		printf("even number");
    		break;
        default:
    		printf("invaild ");
    }
    return 0;
}
    
