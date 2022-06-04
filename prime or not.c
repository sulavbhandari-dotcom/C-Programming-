#include <stdio.h>
int main(){
    int num,counter,i;
    printf("Enter a number");
    scanf("%d", &num);
    for(i=1; i<=num; i=i+1)
    {
        if(num%i==0)
        {
            counter=counter+1;
        }
        else
        {
            counter=counter;
        }
    }
    if(counter>2)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}