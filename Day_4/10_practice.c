#include<stdio.h>
int main(){
    int number;
    printf("Enter the number from 1 to 7 only : ");
    scanf("%d",&number);
    if (number==1)
    {
        printf("MONDAY \n");
    }
    else if (number==2)
    {
        printf("TUESDAY \n");
    }
    else if (number==3)
    {
        printf("WEDNESDAY \n");
    }
    else if (number==4)
    {
        printf("THURSDAY \n");
    }
    else if (number==5)
    {
        printf("FRIDAY \n");
    }
    else if (number==6)
    {
        printf("SATURDAY \n");
    }
    else if (number==7)
    {
        printf("SUNDAY \n");
    }
    else {
        printf("You Enter Wrong Number !! \n");
    }
    
}