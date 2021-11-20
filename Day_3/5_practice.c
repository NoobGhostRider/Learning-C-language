#include<stdio.h>
int main(){
    int sum,first_side,second_side,third_side;
    printf("Enter The First side of triangle : ");
    scanf("%d",&first_side);
    printf("Enter The Second side of triangle : ");
    scanf("%d",&second_side);
    printf("Enter The Third side of triangle : ");
    scanf("%d",&third_side);
    if ((first_side>second_side)&&(first_side>third_side))
    {
        sum=second_side+third_side;
        if (first_side<sum)
        {
            printf("Triangle id Valid !! \n");
        }
        else{
            printf("Triangle is Not Valid !!\n");
        }
        
    }
    else if ((second_side>first_side)&&(second_side>third_side))
    {
        sum=first_side+third_side;
        if (sum>second_side)
        {
            printf("Triangle is Valid !!\n");
        }
        else{
            printf("Triangle is Not Valid !!\n");
        }
        
    }
    else if ((third_side>first_side)&&(third_side>second_side))
    {
        sum=first_side+second_side;
        if (sum>third_side)
        {
            printf("Triangle is Valid !!\n");
        }
        else{
            printf("Triangle is Not Valid !!\n");
        }
        
    }
    else{
        printf("All The side are same !! \n");
    }
    return 0;
}