//Wap to find multiplication of digits of a number.

#include<stdio.h>
int main(){
    int number,rem,multip=1;
    printf("Enter The Number : ");
    scanf("%d",&number);
    while (number>0)
    {
        rem=number%10;
        number/=10;
        multip*=rem;
    }
    printf("The Multiplication of digit of a number : %d\n",multip);
    return 0;
}