#include<stdio.h>
int main(){
    int i,j=1;
    printf("Enter the n number : ");
    scanf("%d",&i);
    do{
        printf("The Natural Number before n number : %d \n",j);
        j++;
    }while(j<=i);
    
}