#include <stdio.h>
struct book
{
    char book_name[100];
    char author_name[100];
    int book_id;
    int price;
};

int main()
{
    int i,max,b;
    struct book var[4];
    for(i=0;i<4;i++)
    {
        printf("Enter Book name ");
        scanf("%s", var[i].book_name);
        printf("Enter Author name ");
        scanf("%s", var[i].author_name);
        printf("Enter Book Id ");
        scanf("%d", &var[i].book_id);
        printf("Enter Book price ");
        scanf("%d", &var[i].price);
    }
    
   max=var[0].price;
   for(i=0;i<4;i++)
   {
    if(var[i].price>max)
    {
        max=var[i].price;
    }
   }
   for(i=0;i<4;i++)
   {
    if(max==var[i].price)
    {
        b= i;
    }
   }
    printf("The maximum priced book is\n");
        printf("%s\t",var[b].book_name);
        printf("%s\t",var[b].author_name);
        printf("%d\t",var[b].book_id);
        printf("%d\n", var[b].price);


    return 0;
    
   

}