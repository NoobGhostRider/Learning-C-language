//Wap to take any no. From the user and check whether it is palindrome or not.

#include<stdio.h>
int main(){
    int num,rev=0,r,n;
    printf("Enter the Number : ");
    scanf("%d",&num);
    n=num;
    while (num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    if (n==rev)
    {
        printf("It is palindrome\n");
    }
    else{
        printf("It is Not palindrome\n");
    }
    return 0;
}