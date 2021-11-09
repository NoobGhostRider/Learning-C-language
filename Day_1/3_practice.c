#include<stdio.h>
int main(){
    int radius,area;
    printf("Enter the radius of Circle :");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area Of Circle is : %d\n", area);
    return 0;
}