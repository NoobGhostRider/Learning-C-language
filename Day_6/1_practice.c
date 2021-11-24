//1. WAP to print a table in reverse order of given number.

#include<stdio.h>
int main(){
    int number,i=10,table,j=0;
    printf("Enter the No. : ");
    scanf("%d",&number);
    for (j; j<10 ; j++)
    {
        table=number*i;
        printf("%d X %d = %d \n",number,i,table);
        i--;
    }
    
    return 0;
}