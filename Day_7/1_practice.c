//WAP to count no. Of digits in a number.
#include<stdio.h>
int main(){
    int count=0,number,digit,rem;
    printf("Enter The Number : ");
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        number=number/10;
        count+=1;    
    }
    printf("The Total no. of digit is : %d\n",count);
    return 0;
}