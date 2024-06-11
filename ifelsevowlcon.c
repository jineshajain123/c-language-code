#include<stdio.h>
void main()
{
	char ch;
	printf("enter a alphabet:");
	scanf("%c",&ch);
	{
		if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	    {
		  printf("%c is vowel",ch);
	    }
	    else
	    {
		  printf("%c is consonnent",ch);
	    } 
	}
}
