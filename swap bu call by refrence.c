#include<stdio.h>
void swap(int *x, int *y)

{
    int c;
    c = *x;
    *x = *y;
    *y = c;


}
int main()
{
    int a,b;
    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Numbers after swaping are %d and %d",a,b);
    return 0;
}
