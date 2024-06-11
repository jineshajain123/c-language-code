#include<stdio.h>
int main()
{
	int year; 
	printf("enter the year:");
	scanf("%d",&year);
	(year%4==0)? printf("this is leap year") : printf("this is not leap year");
	
	return 0;
}
