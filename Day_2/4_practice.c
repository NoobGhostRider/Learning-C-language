#include<stdio.h>
#include<math.h>
int main(){
    int power,number,p;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("Enter the Number to power : ");
    scanf("%d",&power);
    p=pow(number , power);
    printf("The Number After Power is : %d\n",p);
    return 0;
}