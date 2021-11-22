//1.Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main(){
    int first_side,second_side,third_side;
    printf("Enter The First Side Of Triangle : ");
    scanf("%d",&first_side);
    printf("Enter The Second Side Of Triangle : ");
    scanf("%d",&second_side);
    printf("Enter The Third Side Of Triangle : ");
    scanf("%d",&third_side);
    if ((first_side==second_side)&&(first_side==third_side))
    {
        printf("Triangle is Equilateral\n");   
    }
    else if (((first_side==second_side)||(first_side==third_side))&&((first_side!=third_side)||(first_side!=second_side)))
    {
        printf("Triangle is Isoceles\n");
    }
    else if ((first_side!=second_side)&&(first_side!=third_side)){
        printf("Triangle is Scalene\n");
    }
    else{
        printf("You Entered Something Wrong");
    }
    return 0;
}