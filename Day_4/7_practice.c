#include<stdio.h>
int main(){
    int base,height,area;
    float area1,radius;
    char choice;
    printf("Select any choice (1 or 2) \n");
    printf("1. Area of Triangle\n");
    printf("2. Area of circle\n");
    printf("Enter The choice (1 or 2) : ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter The Base : ");
        scanf("%d",&base);
        printf("Enter The Height : ");
        scanf("%d",&height);
        area=(base*height)/2;
        printf("Area Of Triangle is : %d",area);
        printf(" m\n");
    }
    else if (choice==2)
    {
        printf("Enter The Radius : ");
        scanf("%f",&radius);
        area1=3.14*radius*radius;
        printf("Area Of Circle is : %.2f",area1);
        printf(" m\n");
    }
    else{
        printf("You Entered Wrong Choice !! \n");
    }   
    return 0;
}