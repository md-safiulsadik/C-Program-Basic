#include<stdio.h>
int main()
{
   printf("Enter Two Integer Number to SUM  ");
   int n,n2,sum,a,b,mlty,x,y,z,xyz;
    scanf("%d %d",&n,&n2);
    sum = n+n2;
    printf("%d + %d = %d\n",n,n2,sum);

    printf("HAPPY !\nNow You Can Multiply to Integer Number\nEnter to Integer Number\n");
    scanf("%d %d",&a,&b,&mlty);
    mlty=a*b;
    printf("%d x %d = %d\n",a,b,mlty);

    printf("Wanna Have More Fun ? \nEnter Tree Integer Number\n");
    scanf("%d %d %d",&x,&y,&z);
    xyz = x*x*x+y*y*y+z*z*z+ 3*x*y+ 3*y*z +3*z*x;
    printf("%d^3+%d^3+%d^3+3x%dx%d+3x%dx%d+3x%dx%d=%d\nThank You !",x,y,z,x,y,y,z,z,x,xyz);
    getch();
    return 0;


}
