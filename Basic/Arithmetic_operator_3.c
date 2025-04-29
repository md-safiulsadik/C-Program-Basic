/*Write a program that can calculate the area of triangle
When the three length of a triangle is given
*/

#include<stdio.h>
int main()
{
   double a,b,c,s,area;
   printf("Input the three length : ");
   scanf("%lf %lf %lf",&a,&b,&c);
   s = (a+b+c)/2;
   printf("Around : %.1lf\n",s);
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area = %.2l f",area);

   getch();
   return 0;
}
