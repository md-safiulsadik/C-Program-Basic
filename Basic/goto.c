//mltipler useing goto
#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
    {
        int x,y;
        printf("Input a Number ");
        scanf("%d",&x);
        for(y=1; y<=10; y++)
        {
            printf("%d X %d = %d\n",x,y,x*y);
        }


        int n,m=1;
        printf("Input a Number ");
        scanf("%d",&n);

        while(m<=10)
        {
            printf("%d X %d = %d\n",n,m,n*m);
            m++;
        }


        int q,w=1;
        printf("Input a Number ");
        scanf("%d",&q);
        do
        {
            printf("%d X %d = %d\n",q,w,q*w);
            w++;
        }
        while(w<=10);



        int i=1,in;
        printf("Input a Number ");
        scanf("%d",&in);

mlti:
        printf("%d X %d = %d\n",in,i,in*i);
        i++;
        if(i<=10)
            goto mlti;

    }





    getch();
    return 0;

}
