#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void bus_info();
void book_seat();
void all_bus();

struct businfo
{
    int busnum;
    char source[30];
    char destination[30];
    int seat;
    int avlseat;
    float price;
} bus[3];

int i = 0;

struct businfo bus[] = {
    {101, "City A", "City B", 50, 50, 20.99},
    {102, "City C", "City D", 50, 50, 17.99},
    {103, "City E", "City F", 50, 50, 13.99},
};

void book_seat()
{
    int num;
    printf("\nEnter Bus Number : ");
    scanf("%d", &num);
    for (i = 0; i < 3; i++)
    {
        if (bus[i].avlseat == 0)
        {
            printf("\nNo Seat Available");
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (num == bus[i].busnum)
        {
            bus[i].avlseat -= 1;
        }
    }
    printf("\nTicket Booking Succesfull\n");
    main();
}

void bus_info()
{
    system("cls");
    int num;
    printf("\nSee Bus Information\n\n");
    printf("\nEnter Bus Number  ");
    scanf("%d", &num);
    printf("\n");
    for (size_t i = 0; i < 3; i++)
    {
        if (num == bus[i].busnum)
        {
            printf("Bus Number : %d\n", bus[i].busnum);
            printf("Source : %s\n", bus[i].source);
            printf("Destination : %s\n", bus[i].destination);
            printf("Total Seat : %d\n", bus[i].seat);
            printf("Available Seat : %d\n", bus[i].avlseat);
            printf("Ticket Price : %.2f\n\n", bus[i].price);
        }
    }
    main();
}

void all_bus()
{
    int num;
    printf("\nAll Bus Information\n\n");

    for (size_t i = 0; i < 3; i++)
    {
        printf("Bus Number : %d\n", bus[i].busnum);
        printf("Source : %s\n", bus[i].source);
        printf("Destination : %s\n", bus[i].destination);
        printf("Total Seat : %d\n", bus[i].seat);
        printf("Available Seat : %d\n", bus[i].avlseat);
        printf("Ticket Price : %.2f\n\n", bus[i].price);
    }
    main();
}

int main(void)
{
    int choice;
    printf("\nBus Management System");
    printf("\n1.See All Bus");
    printf("\n2.Search Bus Number");
    printf("\n3.Book a Seat");
    printf("\n\nEnter You Choice   ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        all_bus();
        break;
    case 2:
        bus_info();
        break;
    case 3:
        book_seat();
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}