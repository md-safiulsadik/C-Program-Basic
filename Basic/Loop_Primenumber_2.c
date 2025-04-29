//Almost got it :(
#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Enter a Number to get Prime Numbers : ");
    scanf("%d",&n);
  while(n>=2){

    for(i=2; i<n; i++)
        temp=n;
   {
       if(temp%i==0)
       break;
       temp--;

      printf("%d\n",n);

   }
      n--;

  }


    getch();
    return 0;
}
