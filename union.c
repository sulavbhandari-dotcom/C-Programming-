#include<stdio.h>
union book
{
    int book_id;
    char book_name[50];
    char author_name[20];
};
int main()
{
    int i;
    union book var[2];
    for(i=0;i<2;i++)
    {
    printf("Enter book id");
    scanf("%d", &var[i].book_id);
    printf("Enter book name ");
    scanf("%s", var[i].book_name);
    printf("Enter author name ");
    scanf("%s", var[i].author_name);
    }
    for(i=0;i<2;i++)
    {
        printf("%d\t", var[i].book_id);
        printf("%s\t", var[i].book_name);
        printf("%s\n",var[i].author_name);
    }

}