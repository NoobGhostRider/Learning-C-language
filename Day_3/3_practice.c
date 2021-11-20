#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    if (number<0)
    {
        printf("The Number is Negative \n");
    }
    else if(number>=0)
    {
        printf("The Number is Positive \n");
    }
    else{
        printf("You Entered Something wrong \n");
    }
    return 0;
}