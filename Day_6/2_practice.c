//2. WAP to sum first 10 natural number using while loop.

#include<stdio.h>
int main(){
    int n=0 ,i=10,sum=0;
    while (n<=i)
    {
        sum+=n;
        n++;
    }
    printf("Sum of 10 natural number : %d\n",sum);
    return 0;
}