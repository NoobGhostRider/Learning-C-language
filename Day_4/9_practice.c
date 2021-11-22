//10.WAP to calculate the BMI of user and tell the weight status (taking user name input is compuslory).
//  (below 18.5 = underweight , 18.5-24.9= normal weight , 25.0-29.9=over weight , above 30.0 = very over weight).
#include <stdio.h>
int main() {
    char name[25];
    float weight , height ,BMI;
    printf("Enter The Name : ");
    scanf("%s",&name);
    printf("Enter The Weight in Kg : ");
    scanf("%f",&weight);
    printf("Enter The Height in m : ");
    scanf("%f",&height);
    BMI=weight/(height*height);
    if (BMI>18.5)
    {
        printf("%s",name);
        printf(" is underweight and BMI is : %.1f\n",BMI);
    }
    else if ((BMI>=18.5)&&(BMI<=24.9))
    {
        printf("%s",name);
        printf(" is normal weight and BMI is : %.1f\n",BMI);
    }
    else if ((BMI>=25.0)&&(BMI<=29.9))
    {
        printf("%s",name);
        printf(" is over weight and BMI is : %.1f\n",BMI);
    }
    else{
        printf("%s",name);
        printf(" is very over weight and BMI is : %.1f\n",BMI);
    }
    return 0;
}