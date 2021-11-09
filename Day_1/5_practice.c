#include<stdio.h>
int main(){
    int S_I , time , rate , principal;
    printf("Enter the Time : ");
    scanf("%d",&time);
    printf("Enter the Rate : ");
    scanf("%d",&rate);
    printf("Enter the Principal : ");
    scanf("%d",&principal);
    S_I=(time*rate*principal)/100;
    printf("Simple Interest is : %d \n",S_I);
    return 0;
}