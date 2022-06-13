#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100],str3[100];
    printf("Enter first string ");
    gets(str1);
    printf("Enter second string ");
    gets(str2);
    int len1,len2;
    len1=strlen(str1);
    printf("%d is the length of the %s\n", len1,str1);
    len2=strlen(str2);
    printf("%d is the length of the %s\n",len2,str2);
    if(strcmp(str1,str2)==0)
    {
        printf("%s and %s are same strings\n",str1,str2);
    }
    else
    {
        printf("%s and %s are not same strings\n",str1,str2);
    }
    printf("The reverse of string 1 is %s\n",strrev(str1));
    printf("The reverse of string 2 is %s\n",strrev(str2));

    printf("The copied string is %s\n",strcpy(str3,str1));
    printf("The concatenated string is %s\n", strcat(str1,str2));
   
    return 0;


}