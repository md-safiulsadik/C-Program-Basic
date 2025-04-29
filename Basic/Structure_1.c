#include<stdio.h>

struct Student
{
    char name[100];
    int age;
    float mark;
};


int main()
{
    float sum;

    struct Student Studant1,Studant2;
    printf("Input data for Studant 1 \n");
    printf("Input Name : ");
    scanf("%s",&Studant1.name);
    printf("Input Age : ");
    scanf("%d",&Studant1.age);
    printf("Input Mark : ");
    scanf("%f",&Studant1.mark);

    printf("Input data for Studant 2 \n");
    printf("Input Name : ");
    scanf("%s",&Studant2.name);
    printf("Input Age : ");
    scanf("%d",&Studant2.age);
    printf("Input Mark : ");
    scanf("%f",&Studant2.mark);


    printf("\nInformation for Studant1 \n");
    printf("Name : %s\n",Studant1.name);

    printf("Age : %d\n",Studant1.age);

    printf("Mark : %.2f\n",Studant1.mark);


    printf("\nInformation for Studant2 \n");
    printf("Name : %s\n",Studant2.name);

    printf("Input Age : %d\n",Studant2.age);

    printf("Input Mark : %.2f\n",Studant2.mark);

    sum = Studant1.mark+Studant2.mark;

    printf("\n\nThe average of total marks %.2f ",sum/2);




    getch();
    return 0;

}
