//Wap to take any no. From the user and print the reverse  of it.

#include<stdio.h>
int main(){
    int num,rev=0,r;
    printf("Enter the Number : ");
    scanf("%d",&num);
    while (num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
   printf("reverse of no. is : %d\n",rev);
    return 0;
}