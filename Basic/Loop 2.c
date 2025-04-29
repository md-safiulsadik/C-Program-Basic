#include<stdio.h>
int main()
{
   int i,input;
   printf("Input a number ");
   scanf("%d",&input);

   for(i=1; i<=input*10; i++)
   {
       if(i%input==0)
        printf("%d\n",i);
       continue;
   }




    getch();
    return 0;
}
