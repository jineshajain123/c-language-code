#include<stdio.h>
void main()
{
    int r,c;
    printf("enter matrix row :");
    scanf("%d",&r);
    printf("enter matrix column :");
    scanf("%d",&c);
    int mat[r][c];
    int i,j;
    printf("enter matrix element:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter element matrix pos mat[%d][%d]:",i+1,j+1);
          scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix elements are :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    //display left diagonal 

    if(r==c)
    {                                     // 00 01 02 03
      printf("left diagonal elements :\n");// 1  2  3  4 
      for(i=0;i<r;i++)                    // 10 11 12 13
      {                                    // 5  6  7  8
        printf("%d ",mat[i][(r-1)-i]);    // 20 21 22 23 
      }              // 0 3  (4)           // 9  1  2  3         
    }                // 1 2  (7)          // 30 31 32 33
    else             // 2 1  (1)           // 4  5  6  7
    {                // 3 0  (4)
        printf("  ");
    }
    printf("\n");
}
