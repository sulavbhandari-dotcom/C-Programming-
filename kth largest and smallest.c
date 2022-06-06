#include <stdio.h>
int main(){
    int size,i,j,temp, k;
    printf("Enter the number of elements");
    scanf("%d", &size);
    int num[size];
    for(i=0; i<size; i++)
    {
        printf("Enter number");
        scanf("%d", &num[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=1;j<=size-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                
            }
        }
    }
    for(i=0; i<size; i++)
    {
        
        printf("%d", num[i]);
    }
    return 0;
}