#include<stdio.h>
int main(){
    int number,i=1,prime,count=0;
    printf("Enter the Number to Check prime or not : ");
    scanf("%d",&number);
    while (i<=number)
    {
        prime=number%i;
        if (prime==0)
        {
            count+=1;
        }
        i++;
        
    }
    if (count==2)
    {
        printf("The Number is Prime\n");
    }
    else{
        printf("The Number is Not prime\n");
    }
    return 0;
}