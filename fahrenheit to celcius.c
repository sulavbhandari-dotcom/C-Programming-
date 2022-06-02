#include<stdio.h>
#include<math.h>
int main()
{ 
float F, C;
printf("Enter Temperature in Fahrenheit:");
scanf("%f",&F);
C = ((F-32)*5)/9;
printf("\n\n Temperature in Celsius is : %f",C);
return (0);
}