#include <stdio.h>

void check(int a)
{
  if (a % 2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");
}

int main()
{
  int num;
  while (1)
  {
    printf("Enter a Number to Check Even/Odd ");
    scanf("%d", &num);
    check(num);
  }
}