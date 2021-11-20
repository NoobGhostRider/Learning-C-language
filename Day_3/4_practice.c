#include<stdio.h>
int main(){
    int first , second ;
    printf("Enter the First Number : ");
    scanf("%d",&first);
    printf("Enter the Second Number : ");
    scanf("%d",&second);
    if (first>second)
    {
        printf("The greatest Number is : %d\n",first);
    }
    else if (second>first)
    {
        printf("The greatest Number is : %d\n",second);
    }
    else if(first == second){
        printf("Both Number are Equal \n");
    }
    else{
        printf("You Entered Something Wrong\n");
    }
    return 0;
}