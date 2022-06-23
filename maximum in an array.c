#include <stdio.h>
int maximum(int a, int *x)
{
    int i, max=*x;
    for(i=1;i<a;i++)
    {
    if(*(x+i) > max)
    {
        max=*x+i;
    }
    }
    return max;
}
int main()
{
    int size,g,i;
    printf("How many elements do you want? ");
    scanf("%d", &size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the element ");
        scanf("%d", &arr[i]);
    }
    g=maximum(size,arr);
    printf("The greater number among the array is %d ", g);
}
