//3. WAP to sum first 10 natural number using do while loop.

#include<stdio.h>
int main(){
    int n=1,i=10,sum=0;
    do
    {
        sum+=n;
        printf("The sum of natural no. %d is : %d\n",n,sum);
        n++;
    } while (n<=10);
    printf("Total sum of 10 natural no. is : %d\n",sum);
    return 0;
}