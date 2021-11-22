//A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
//  above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to
 // accept the number of days the member is late to return the book and display the fine or the appropriate message.

#include<stdio.h>
int main(){
    int day;
    printf("Enter the day : ");
    scanf("%d",&day);
    if ((day>=1)&&(day<=5))
    {
        printf("Your Fine is 50 Paise\n");
    }
    else if((day>=6)&&(day<=10)){
        printf("Your Fine is 1 Rupees\n");
    }
    else if((day>=10)&&(day<=30)){
        printf("Your Fine is 5 Rupees\n");
    }
    else {
        printf("Your Membership is Cancelled\n");
    } 
    return 0;
}