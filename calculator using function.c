#include <stdio.h>
int x,y;
int sum(int,int),difference(int,int),product(int,int),division(int,int);
int sum(int x,int y)
{
return x+y;
}
int difference(int x,int y)
{
return x-y;
}
int product(int x,int y)
{
return x*y;
}
int division(int x,int y)
{
if(y==0)
{
    return 0;
}
else
{
    return x/y;
}
}
int main(){
    int a,b,i,choice,x=1;
    for(i=0;x>0;i++)
    {
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter Second number ");
    scanf("%d", &b);
    printf("What task do you want to operate?\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1 : 
    printf("The sum of %d and %d is %d",a,b,sum(a,b));
    break;
    case 2 :
    printf("The difference of %d and %d id %d", a,b,difference(a,b));
    break;
    case 3:
    printf("The product of %d and %d is %d",a,b,product(a,b));
    break;
    case 4:
    if(division(a,b)==0)
    {
        printf("DIVISION IS NOT POSSIBLE");
    }
    else
    {
        printf("The division of %d and %d is %d ",a,b,division(a,b));
    }
    break;
    default:
    printf("YOU MADE INVALID CHOICE");
    }
    printf("\nDo you want to do more calculation?\nIf YES press 1\nIf NO press 0\n");
    scanf("%d", &x);
    if (x==1)
    {
        x=x+1;
    }
    else{
        x=0;
    }
}
}