#include<stdio.h>

struct Car
{
    int ID;
    char model[100];
    double rental_rate_per_day ;
};

int main()
{
    struct Car car1= {65484469,"GTR-1(performance)",49.99};
    struct Car car2= {58488484,"GTR-2 2014",69.99};
    struct Car car3= {95484823,"GTR-3 2018",89.99};

    int num,day,total;

    printf("1.Information Of GTR-1(1996) \n");
    printf("Car ID : %d\n",car1.ID);
    printf("Car Model : %s\n",car1.model);
    printf("Car Rental/Day : $%.2lf\n",car1.rental_rate_per_day);

    printf("\n\n");

    printf("2.Information Of GTR-2(2014) \n");
    printf("Car ID : %d\n",car2.ID);
    printf("Car Model : %s\n",car2.model);
    printf("Car Rental/Day : $%.2lf\n",car2.rental_rate_per_day);

    printf("\n\n");

    printf("3.Information Of GTR-3(2018) \n");
    printf("Car ID : %d\n",car3.ID);
    printf("Car Model : %s\n",car3.model);
    printf("Car Rental/Day : $%.2lf\n",car3.rental_rate_per_day);
label:
    printf("\nSelect Your Car(1,2,3)  ");
    scanf("%d",&num);

    printf("\n");
    if(num==1)
    {
        printf("You Selected GTR-1(1996)\n");
        printf("Car ID : %d\n",car1.ID);
        printf("Car Model : %s\n",car1.model);
        printf("Car Rental/Day : $%.2lf\n",car1.rental_rate_per_day);
        printf("\n");
        printf("Ranting For How May Days ?  ");
        scanf("%d",&day);
        printf("\n");
        printf("Your Total Cost : $%.2lf\n",car1.rental_rate_per_day*day);
        printf("Send Money Though Bank\nA/C : 02506546488\nEnjoy Your Car :)");
        printf("\n");
    }
    else if(num==2)

    {

        printf("You Selected GTR-2(2014)\n");
        printf("Car ID : %d\n",car2.ID);
        printf("Car Model : %s\n",car2.model);
        printf("Car Rental/Day : $%.2lf\n",car2.rental_rate_per_day);
        printf("\n");
        printf("Ranting For How May Days ?  ");
        scanf("%d",&day);
        printf("\n");
        printf("Your Total Cost : $%.2lf\n",car2.rental_rate_per_day*day);
        printf("Send Money Though Bank\nA/C : 02506546488\nEnjoy Your Car :)");
        printf("\n");
    }
    else if(num==3)

    {

        printf("You Selected GTR-3(2018)\n");
        printf("Car ID : %d\n",car3.ID);
        printf("Car Model : %s\n",car3.model);
        printf("Car Rental/Day : $%.2lf\n",car3.rental_rate_per_day);
        printf("\n");
        printf("Ranting For How May Days ?  ");
        scanf("%d",&day);
        printf("\n");
        printf("Your Total Cost : $%.2lf\n",car3.rental_rate_per_day*day);
        printf("Send Money Though Bank\nA/C : 02506546488\nEnjoy Your Car :)");

    }
    else
    {
        printf("Wrong Input\nPlease Input (1,2 or 3)");
        goto
        label;

    }




    getch();
    return 0;
}
