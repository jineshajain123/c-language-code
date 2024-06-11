#include<stdio.h>
void even_odd_series();
void even_odd_series()

{
	int i;
	printf("even series :\n");
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
	    {
	    	printf("%d\n",i);
	    }
    }
	printf("odd series :\n");
	for(i=1;i<=20;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		
    }
}

void main()
{
    even_odd_series();
}

