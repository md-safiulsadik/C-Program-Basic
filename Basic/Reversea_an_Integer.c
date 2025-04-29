#include<stdio.h>
int main()
{
    int remain,input,temp,sum=0;
    printf("Input a Number ");
    scanf("%d",&input);
    temp=input; //123

    while(temp!=0) // stop at temp=0
    {
        remain=temp%10; // 3,2,1
        sum=(sum*10)+remain; //0X10+3=3,3X10+2=32,32X10+1=321
        temp=temp/10;//12,1,0
    }
    printf("Reverse Number %d\n",sum);

    if(input==sum)
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome Number\n");


    getch();
    return 0;
}
