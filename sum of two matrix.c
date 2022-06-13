#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("How many row do you want ");
    scanf("%d", &row);
    printf("how many column do you want ");
    scanf("%d", &col);
    int A[row][col], B[row][col],C[row][col];
    printf("INPUT ELEMENT IN A\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element ");
            scanf("%d",&A[i][j]);
        }
    }
    printf("INPUT ELEMENT IN B\n");
       for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element ");
            scanf("%d",&B[i][j]);
        }
    }
       for(i=0;i<row;i++)
    {
        
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
printf("\nFIRST MATRIX\n");
 for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nSECOND MATRIX\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\nSUM OF  MATRIX\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}