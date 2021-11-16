#include<stdio.h>
int main(){
    int math,english,hindi,social,science;
    char name[25];
    float percentage;
    printf("Enter Student name : ");
    scanf("%s",&name);
    printf("Enter the Maths Marks : ");
    scanf("%d",&math);
    printf("Enter the English Marks : ");
    scanf("%d",&english);
    printf("Enter the Hindi Marks : ");
    scanf("%d",&hindi);
    printf("Enter the Social Marks : ");
    scanf("%d",&social);
    printf("Enter the Science Marks : ");
    scanf("%d",&science);
    percentage=((math+english+hindi+science+social)*100)/500;
    printf("%s",name);
    printf(" has got %.2f",percentage);
    printf(" % \n");
    return 0;
}