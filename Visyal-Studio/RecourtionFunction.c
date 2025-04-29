#include<stdio.h>
int main()
{
    int result, in;
    printf("Enter Number to get Factorial : ");
    scanf("%d",&in);
    result = fact(in);
    printf("\nFactorial of %d = %d",in,result);

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