#include<stdio.h>
int main()
{
    int num[]={32, 7, 88, 29, 71, 20, 78, 54, 39,
    48, 2, 82, 76, 46, 15, 55, 10, 62, 25, 65, 42,
     31, 19, 68, 50, 3, 89, 16, 73, 14, 21, 58,
     6, 4, 23, 9, 35, 38, 99, 17, 43, 44, 93, 40, 1,
      28, 84, 22, 64, 75, 72, 36, 8, 33, 41, 49, 69,
      56, 57, 18, 51, 11, 74, 26, 47, 66, 52, 61,
      60, 24, 79, 81, 95, 30, 87, 37, 86, 53, 85, 77,
      67, 27, 45, 70, 90, 94, 80}, num2[90];
    int vlu,i,pos=-1;

    printf("Enter a Random Number (max 2 digit) : ");
    scanf("%d",&vlu);

     for(i=0;i<99;i++)
     {
         if(vlu==num[i])
         {
             pos=i+1;
             break;
         }
     }
      if(pos==-1)
        printf("Not Found");
      else
        printf("The Number is in %d Position ",pos);


    getch();
    return 0;
}

