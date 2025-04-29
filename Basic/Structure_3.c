#include<stdio.h>

struct Book{
    char title[110];
    char author[100];
    char price[20];
};

int main()
{
    struct Book book1={"The Midnight Library", "Matt Haig" ,"$13.29 (Paperback)"};
    struct Book book2={"Where the Crawdads Sing" ,"Delia Owens ","$9.98 (Paperback)"};
    struct Book book3= {"Educated", "Tara Westover", "$13.99 (Paperback)" };



    printf("Book 1\n");
    printf("%s\n", book1.title);
    printf("%s\n",book1.author);
    printf("%s\n",book1.price);

    printf("\nBook 1\n");
    printf("%s\n", book2.title);
    printf("%s\n",book2.author);
    printf("%s\n",book2.price);

    printf("\nBook 1\n");
    printf("%s\n", book3.title);
    printf("%s\n",book3.author);
    printf("%s\n",book3.price);

    getch();
    return 0;
}



