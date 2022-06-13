#include<stdio.h>
int main(){
    int oa1,oa2,ob1,ob2;
    printf("What is the order of first matrix?");
    scanf("%d %d", &oa1,&oa2);
     printf("What is the order of second matrix?");
    scanf("%d %d", &ob1,&ob2);
    if (oa2==ob1)
    {
       int a[oa1][oa2], b[ob1][ob2],c[oa2][ob1],i,j,k;
    for(i=0;i<oa1;i++)
    {
        for(j=0;j<oa2;j++)
        { 
        printf("Enter the element for A");
        scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<ob1;i++)
    {
        for(j=0;j<ob2;j++)
        { 
        printf("Enter the element for B");
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<oa1;i++)
    {
        for(k=0;k<ob2;k++)
        {
            int sum=0;
            for(j=0;j<oa2;j++)
            {
                sum=sum+a[i][j]*b[j][k];
                c[i][k]=sum;
                
            }
        }
    }
    for(i=0;i<oa1;i++)
    {
        for(j=0;j<ob2;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("MATRIX MULTIPLICATION IS NOT POSSIBLE");
    }
    
    return 0;

}