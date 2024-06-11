#include<stdio.h>
int main()
{
	int num,gram,doller,days;
	printf("enter the number between 1-5");
	scanf("%d",&num)
	
	switch (num)
	{
		case 1 : printf("enter the weight:\n");
		scanf("%d",&gram);
		gram=kg*1000;
		printf("%d gram");
		break;
		
		case 2 : printf("enter the rupees:\n");
		scanf("%d ",&doller);
		                   ;
		printf("%d doller");
		break;
		
		case 3 : printf("enter the days:\n");
		scanf("%d",&gram);
		gram=kg*1000;
		
		break;
		
		case 4 : printf("enter the meter:\n");
		scanf("%d",&gram);
		gram=kg*1000;
	
		break;
		
		case 5 : printf("enter the weight:\n");
		scanf("%d",&gram);
		
		printf("%d gram");
		break;
		
	}
