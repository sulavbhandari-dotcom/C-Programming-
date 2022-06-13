#include <stdio.h>
int main()
{
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
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            trans[i][j]=a[j][i];
        }
    }
int count=0;
for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(trans[i][j]==a[i][j])
            {
                count=count+1;
            }
        }
    }
    if(count==row*col)
    {
        printf("SYMMETIRC");
    }
    else
    {
        printf("ASYMMETRIC");
    }
    return 0;
}