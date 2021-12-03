//WAP to find sum of digits of a number.

#include<stdio.h>
int main(){
    int number,rem,sum=0;
    printf("Enter The Number : ");
    scanf("%d",&number);
    while (number>0)
    {
        rem=number%10;
        number/=10;
        sum+=rem;
    }
    printf("The Sum Of digit is : %d\n",sum);
    return 0;
}