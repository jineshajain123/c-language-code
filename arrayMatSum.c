#include<stdio.h>
void main()
{
    int r,c;
    printf("enter matrix row :");
    scanf("%d",&r);
    printf("enter matrix column :");
    scanf("%d",&c);
    int mat1[r][c],mat2[r][c],summat[r][c];
    int i,j;
    printf("enter first matrix element:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter element matrix first pos mat[%d][%d] :",i+1,j+1);
          scanf("%d ",&mat1[i][j]);
        }
    }

    printf("enter second matrix element:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter element of second matrix pos mat[%d][%d]:",i+1,j+1);
          scanf("%d",&mat2[i][j]);
        }
    }
    printf("\nfirst matrix elements are :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",mat1[i][j]);
        }
        printf("\n ");
    }
    printf("\nsecond matrix elements are :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
//sum of two matrix 

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
      summat[i][j]=mat1[i][j]+mat2[i][j];
    }
}
printf("sum of matrix elements are :%d\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d ",summat[i][j]);
    }
    printf("\n");
}
