#include <stdio.h>
struct book
{
    char book_name[100];
    char author_name[100];
    int book_id;
};

int main()
{
    int i;
    struct book var[2];
    for(i=0;i<2;i++)
    {
        printf("Enter Book name ");
        scanf("%s", var[i].book_name);
        printf("Enter Author name ");
        scanf("%s", var[i].author_name);
        printf("Enter Book Id ");
        scanf("%d", &var[i].book_id);
    }
    
    for(i=0;i<2;i++)
    {
        printf("%s\t",var[i].book_name);
        printf("%s\t",var[i].author_name);
        printf("%d\n",var[i].book_id);
    }
    return 0;
    
   

}