#include<stdio.h>
int main()
{
	int n,n1,n2,ch;
	printf("enter first number:");
	scanf("%d",&n1);
	printf("enter second number:");
    scanf("%d",&n2);
    
	while(1)
	{
		printf("\n 1.add \n 2.sub \n 3.mul \n 4.div");
	    printf("\n please select any one:\n");
	    scanf("%d",&ch);
	    printf("\n do you want to continue:\n 1.YES \n 2.NO \n");
		scanf("%d",&n);
		if(n==1)
		{
	        switch(ch)
	        {
			    case 1:
			        printf("%d + %d =%d",n1,n2,n1+n2);
			        break;
		        case 2:
			        printf("%d - %d =%d",n1,n2,n1-n2);
			        break;
		        case 3:
			        printf("%d * %d =%d",n1,n2,n1*n2);
			        break;
		        case 4:
			        printf("%d / %d =%d",n1,n2,n1/n2);
			        break;
		        default:
			        printf("\n invalid choice");
			    
			}
		}
		else
		{
			break;
		}
	}
    return 0;
}
