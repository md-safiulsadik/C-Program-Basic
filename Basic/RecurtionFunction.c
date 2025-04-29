#include<stdio.h>
int main()
{
    int result, num;
    printf("Enter Number to get Factorial : ");
    scanf("%d",&num);
    result = fact(num);
    printf("\nFactorial of %d = %d",num,result);

}

int fact(int n)
{
    if (n==1)
    {
      return 1;
    }
    else
       return n*fact(n-1);
}
