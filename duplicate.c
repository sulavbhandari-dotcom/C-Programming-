#include <stdio.h>
int main(){
    int size,i,j,temp;
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
        for(j=i+1;j<size;j++)
        {
            if(num[i]==num[j])
            {
                temp=num[j];
                printf("%d is duplicate\n ", temp);
            }
        }
    }

 
return 0;
}