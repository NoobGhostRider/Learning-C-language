#include<stdio.h>
int main(){
    int length , width , perimeter , area;
    printf("Enter the Length of Rectangle : ");
    scanf("%d",&length);
    printf("Enter the Width of Rectangle : ");
    scanf("%d",&width);
    perimeter=2*(length+width);
    area=length*width;
    printf("Perimeter of Rectangle : %d \n",perimeter);
    printf("Area of Rectangle : %d \n",area);
    return 0;
}
