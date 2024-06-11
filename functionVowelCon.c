#include<stdio.h>
void alpha();

void alpha()
{
	char ch;
	printf("enter a character :\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is vowel\n",ch);
	}
	else 
	{
		printf("%c is consonnent\n",ch);
	}
}
void main()
{
	alpha();
}   




