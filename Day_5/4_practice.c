#include<stdio.h>
int main(){
    int number,i=2;
    printf("Enter the Number to Check prime or not : ");
    scanf("%d",&number);
    while (i<number)
    {
        if (number%i==0)
        {
            printf("The Number is not prime\n");
            break;
        }
        else{
            printf("The Number is prime\n");
            break;
        }
        i++;
    }
    
    return 0;
}