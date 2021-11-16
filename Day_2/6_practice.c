#include<stdio.h>
int main(){
    int base,height;
    float area;
    printf("Enter the base of right triangle : ");
    scanf("%d",&base);
    printf("Enter the height of right triangle : ");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("Area of Right triangle is : %.2f\n",area);
    return 0;
}