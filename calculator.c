#include <stdio.h>
int main(){
    int a,b,i,choice;
    int sum=0,diff=0,pro=0,div=0;
    int x=1;
    for(i=0;x>0;i++)
    {
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("What task do you want to operate?\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: 
        sum=a+b;
        printf("Sum of %d and %d is %d\n",a,b,sum);
        break;
        case 2: 
        diff=a-b;
        printf("Difference of %d and %d is %d\n",a,b,diff);
        break;
        case 3: 
        pro=a*b;
        printf("Product of %d and %d is %d\n",a,b,pro);
        break;
        case 4: 
        if(b==0)
        {
            printf("DIVISION IS NOT POSSIBLE");
        }
        else
        {
           div=a/b; 
           printf("DIVISION of %d and %d is %d\n",a,b,div);
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