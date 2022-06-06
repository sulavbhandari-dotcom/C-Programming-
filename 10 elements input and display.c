#include <stdio.h>
int main(){
    int array[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("num [%d]= %d\n", i, array[i]);
    }
return 0;
}