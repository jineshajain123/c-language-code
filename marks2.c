/*Write a program to accept roll no and marks of 5 subjects of a student, if individuals  subject have above 40 marks so print student qualify exam otherwise print student fail in exam and if student qualify exam so Calculate  percentage got in exam  by  student.
a.	If per greater than or equal to 75 ? A grade
b.	If per between 60-75 ? B grade
c.	If per between 50-60 ? C grade
d.	If per between 40-50 ? D grade*/

#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,avg;
    float per;
    
    printf("enter the 5 subject marks:\n");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    
    
    if(n1>40&&n2>40&&n3>40&&n4>40&&n5>40)
    {
    	per= ((n1+n2+n3+n4+n5)/5.0);
		printf("percentage of student is: %2f",per);
		
		if( per>=75)
		{
			printf("\nA grade");
		}
		else if( per>60&&per<75)
		{
			printf("\nB grade");
		}
		else if( per>50&&per<60)
		{
			printf("\nC grade");
		}
		else if( per>40&&per<50)
		{
			printf("\nD grade");
		}
	}
		
    
    else
    {
        printf("FAIL\n");
    }
    avg= (n1+n2+n3+n4+n5)/5;
    printf("\n total avg is =%d",avg);
}
