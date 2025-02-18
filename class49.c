#include<stdio.h>
int main(){
    float frn,cr,sum;
    printf("Enter your Celsius temperature :");
    scanf("%f",&cr);

    frn =( 1.8 * cr ) + 32 ;

    printf("Enter Fahrenheit temperature :%.3f",frn);


}