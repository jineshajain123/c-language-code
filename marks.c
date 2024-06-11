/*Write a program to accept roll no and marks of 5 subjects of a student, if individuals  subject have above 40 marks so print student qualify exam otherwise print student fail in exam and if student qualify exam so Calculate  percentage got in exam  by  student.
a.	If per greater than or equal to 75  A grade
b.	If per between 60-75  B grade
c.	If per between 50-60  C grade
d.	If per between 40-50  D grade*/

#include<stdio.h>
int main()
{
    int marks, math,hindi,eng,bio,clang;
    printf("enter the 5 subject marks:");
    scanf("%d%d%d%d%d",&math,&hindi,&eng,&bio,&clang);
    
    if(marks>=75)
    {
        printf("A grade");
    }
    if(marks=60-75)
    {
        printf("B grade");
    }
    if(marks=50-60);
    {
        printf("C grade");
    }
    if(marks=40-50)
    {
        printf("D grade");
    }
    if(marks<40)
    {
        printf("FAIL");
    }
}