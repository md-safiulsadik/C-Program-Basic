#include<stdio.h>
int main()



{
      char upper;
       printf("Enter a Uppercase letter ");
       scanf("%c",&upper);
      upper = tolower(upper);
      printf("uppercase latter = %c",upper);

      getch();
      return 0;
}
