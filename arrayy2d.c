#include<stdio.h>
void main()
{
    int i,j;
    int mat[3][3]={{11,22,33},{44,55,66},{77,88,99}};
    printf("matrix elements are :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
        
}