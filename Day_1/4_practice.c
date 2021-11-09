#include<stdio.h>
int main(){
    float celsius ,j , Fahrenheit;
    j=1.8;
    printf("Enter the Celsius to Convert into fahrenheit :");
    scanf("%f",&celsius);
    Fahrenheit=(j*celsius)+32 ;
    printf("Coverted Fahrenheit is : %f \n",Fahrenheit);
    return 0;
}