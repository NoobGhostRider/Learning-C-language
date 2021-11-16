#include<stdio.h>
#include<math.h>
int main(){
    int number;
    float root;
    printf("Enter the Number : ");
    scanf("%d",&number);
    root=sqrt(number);
    printf("Square root is : %.2f \n",root);
    return 0;
}