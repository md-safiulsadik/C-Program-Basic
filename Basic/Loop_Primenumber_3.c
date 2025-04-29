#include<stdio.h>
int main()
{
    int count=0,i,num,temp;
    printf("Enter Number to get PrimeNumber : ");
    scanf("%d",&num);

 label:

    for(i=2; i<num; i++)
        temp=num;
    {
        if(temp%i==0)
            count++;
    }
      if(count==0)
        printf("%d",num);
    num--;
    goto label;



    getch();
    return 0;
}
