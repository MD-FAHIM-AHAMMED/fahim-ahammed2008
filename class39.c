#include<stdio.h>
int main()
{
    float num1,num2,num3,sum,avg;
    
    printf("Enter Your 1st Number : ");
    scanf("%f",&num1);
    printf("Enter Your 2nd Number : ");
    scanf("%f",&num2);
    printf("Enter Your 3rd Number : ");
    scanf("%f",&num3);
    sum = num1 + num2 + num3 ;
    printf("The sum is = %f\n",sum);
    avg =   sum / 3 ;
    printf("The avg is : %f",avg);



    
}