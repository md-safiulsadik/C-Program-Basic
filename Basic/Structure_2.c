#include<stdio.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct Time time1,time2,result;

    printf("Enter The Time 1 \n");
    printf("Hours : ");
    scanf("%d",&time1.hours);
    printf("Minutes : ");
    scanf("%d",&time1.minutes);
    printf("Seconds : ");
    scanf("%d",&time1.seconds);

    printf("\n\nEnter The Time 2 \n");
    printf("Hours : ");
    scanf("%d",&time2.hours);
    printf("Minutes : ");
    scanf("%d",&time2.minutes);
    printf("Seconds : ");
    scanf("%d",&time2.seconds);

    result.seconds = time1.seconds + time2.seconds ;
    result.minutes = time1.minutes + time2.minutes + result.seconds / 60;
    result.hours = time1.hours + time2.hours + result.minutes / 60;

    result.seconds %= 60;
    result.minutes %= 60;

    printf("Time1 : %d:%d:%d", result.hours, result.minutes, result.seconds);

    getch();
    return 0;
}
