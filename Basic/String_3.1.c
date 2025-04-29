#include<stdio.h>
int main()
{
  while(1)
  {
        char str[30],revstr[30];
    int i=0,j,k=0,l;
    printf("Input a String to Revers :");
    gets(str);

    while(str[i]!='\0')
    {
        i++;
        k++;
    }
    for(j=0,i=k-1;j<=k,i>=0;i--,j++)
    {
        revstr[j] = str[i];
    }
     printf("\nString = %s\n",str);
     printf("\nRevers String = %s\n",revstr);
     printf("\n");

  }
    getch();
    return 0;

}
