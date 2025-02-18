#include<stdio.h>
int main (){
    double a,b,c,d,x1,x2;
    printf("Enter Your A Number : ");
    scanf("%lf",&a);

    printf("Enter Your B Number : ");
    scanf("%lf",&b);

    printf("Enter Your C Number : ");
    scanf("%lf",&c);

    //printf("Enter Your A Number : ");
   // scanf("%lf",&a);
   d = sqrt ( b * b-4 * a * c );


   x1 = (-b+d)/(2*a);
   x2 = (-b-d)/(2*a);
   printf("x1 = %.2lf\n",x1);
   printf("x2 = %.2lf\n",x2);



}
