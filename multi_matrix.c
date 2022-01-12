#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k,tot=0;
    printf("Enter the number of rows for first matrix : ");
    scanf("%d",&r1);
    printf("Enter the number of cols for first matrix : ");
    scanf("%d",&c1);
    printf("Enter the element of first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows for second matrix : ");
    scanf("%d",&r2);
    printf("Enter the number of cols for second matrix : ");
    scanf("%d",&c2);
    if(c1!=r2)
        printf("Multiplication not possible");
    else
    {
        printf("Enter the element of second matrix :\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    tot = tot + a[i][k] * b[k][j];
                }
                mul[i][j] = tot;
                tot = 0;
                }
              }
 
        printf(" The resultant matrix : \n "); 
        for (i = 0; i < r1; i++) {
          for (j = 0; j < c2; j++)
            printf("%d \t", mul[i][j] );
          printf(" \n ");
        }
    }
    return 0;
}