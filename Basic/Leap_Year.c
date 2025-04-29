#include<stdio.h>
#include<math.h>
int main()

{
    int n;
    printf("Enter the Year : ");
    scanf("%d",&n);

    if(n%400==0)
        printf("Leap Year");
    else if(n%4==0 &&  n%100!=0)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    getch();
    return 0;
}
