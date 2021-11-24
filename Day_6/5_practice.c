//5. WAP to calculate the factorial of a given number using for loop.

#include<stdio.h>
int main(){
    int number,n=1,k;
    printf("Enter the No. to find factorial : ");
    scanf("%d",&number);
    int j=number;
    for (int i = 0; i < j; i++)
    {
        if (number>0)
        {
            k=n*number;
            n=k;
        }
        number-=1;
    }
    printf("Factorial of %d is : %d\n",j,n);
    return 0;
}