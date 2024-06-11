/*Write a program to read an amount (integer value) and
 break the amount into the smallest possible number of bank notes 500,200,100,50,20,10,5,2,1.*/

#include<stdio.h>
int main()
{
	int amt,rs500,rs200,rs100,rs50,rs20,rs10,rs5,rs2,rs1;
	printf("enter the amount :");
	scanf("%d",&amt);
	
	rs500= amt/500;
	amt=amt%500;
	rs200= amt/200;
	amt=amt%200;
	rs100= (amt/100);
	amt=amt%100;
	rs50= (amt/50);
	amt=amt%50;
	rs20= (amt/20);
	amt=amt%20;
	rs10= (amt/10);
	amt=amt%10;
	rs5= (amt/5);
	amt=amt%5;
	rs2= (amt/2);
	amt=amt%2;
	rs1= (amt/1);
	 printf("\n number of rs500 = %d",rs500);
	 printf("\n number of rs200 = %d",rs200);
	 printf("\n number of rs100 = %d",rs100);
	 printf("\n number of rs50 = %d",rs50);
	 printf("\n number of rs20 = %d",rs20);
	 printf("\n number of rs10 = %d",rs10);
	 printf("\n number of rs5 = %d",rs5);
	 printf("\n number of rs2 = %d",rs2);
	 printf("\n number of rs1 = %d",rs1);
}

