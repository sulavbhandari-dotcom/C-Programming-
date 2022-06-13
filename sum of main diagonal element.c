#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("How many row do you want ");
    scanf("%d", &row);
    printf("how many column do you want ");
    scanf("%d", &col);
    int data[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element ");
            scanf("%d",&data[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+data[i][j];
            }
        }
        
    }
    printf("\nTHE GIVEN MATRIX IS\n");
      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of main diagonal element is %d", sum);
    return 0;
}