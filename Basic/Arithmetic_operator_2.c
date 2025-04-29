 //Area of a Triangle
 #include<stdio.h>
 int main()
 {
     printf("Calculate area of a Triangle\nInput the length : ");
     float l,h,area;
     scanf("%f",&l);
     printf("Input the hight : ");
     scanf("%f",&h);
     area = (float)1/2 *l *h;
     printf("\nArea = %.2f",area); //be careful next time

     getch();


     return 0;
 }
