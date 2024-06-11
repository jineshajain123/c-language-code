#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter first number:");
	scanf("%d",&n1);
	printf("\n enter second number:");
	scanf("%d",&n2);
	printf("\n enter third number:");
	scanf("%d",&n3);
    (n1>n2)? printf("n1 is largest") :(n3<n2)?printf("n2 is largest") :printf("n3 is largest");
    //(n3<n2)?printf("n2 is largest") :printf("n3 is largest");
	return 0;

}
