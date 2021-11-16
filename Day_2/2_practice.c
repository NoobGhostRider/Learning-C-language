#include<stdio.h>
int main(){
    int paisa;
    float rupees;
    printf("Enter paisa to convert in rupees : ");
    scanf("%d",&paisa);
    rupees=paisa/100;
    printf("After converting the Paisa into Rupees : %f \n",rupees);
    return 0;
}