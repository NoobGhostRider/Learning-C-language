//5.Write a C program to find maximum between three numbers.
#include<stdio.h>
int main(){
    int first,second,third;
    printf("Enter the First Number : ");
    scanf("%d",&first);
    printf("Enter the Second Number : ");
    scanf("%d",&second);
    printf("Enter the Third Number : ");
    scanf("%d",&third);
    if ((first>second)&&(first>third))
    {
        printf("Maximum number is : %d\n",first);
    }
    else if ((first<second)&&(second>third))
    {
        printf("Maximum number is : %d\n",second);
    }
    else if ((first<third)&&(second<third))
    {
        printf("Maximum number is : %d\n",third);
    }
    else if ((first==second)&&(second==third))
    {
        printf("ALL ARE EQUAL !!\n");
    }
    
    return 0;
}