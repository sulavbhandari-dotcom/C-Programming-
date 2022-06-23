#include <stdio.h>
int fun(int x,int y,int *a,int *b)
{
    *a=x*y;
    *b=x-y;
}
int main()
{
    int a,b,sum,prod;
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d", &b);
    fun(a,b,&sum,&prod);
    printf("The product is %d\n", sum);
    printf("The difference is %d", prod);
}