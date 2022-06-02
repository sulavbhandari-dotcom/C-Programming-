#include <stdio.h>
#include <math.h>

void main()
{
    int p, r, t, ci;
    printf("Enter the principle :");
    scanf("%d", &p);
    printf("Enter the rate :");
    scanf("%d", &r);
    printf("Enter the time :");
    scanf("%d", &t);
    ci = p*(1+pow(1+r/100,t));
    printf("\n The compound interest is %d", ci);
} 