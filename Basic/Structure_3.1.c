#include<stdio.h>

struct Book
{
    char title;
    char author;
    char price;
};

int main()
{

    struct Book book1[2]= "The Midnight Library , Matt Haig , $13.29 (Paperback)" ;

    printf("Book 1\n");
    printf("%s\n",book1[0].title);
    printf("%s\n",book1[1].author);
    printf("%s\n",book1[2].price);


    getch();
    return 0;
}

