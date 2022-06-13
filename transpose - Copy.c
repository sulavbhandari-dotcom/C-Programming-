#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("How many row do you want ");
    scanf("%d", &row);
    printf("how many column do you want ");
    scanf("%d", &col);
    int a[row][col], trans[col][row];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[i][j]=a[j][i];
        }
    }
    printf("\nTHE GIVEN MATRIX IS\n");
      for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nTHE TRANSPOSE OF GIVEN MATRIX IS\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}