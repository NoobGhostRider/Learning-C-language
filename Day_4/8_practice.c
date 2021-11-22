//8.WAP to take the input as a name , gender and age . check whether he/she is eligible for casting a vote or not as per indian voting system.
#include<stdio.h>
int main(){
    int age;
    char name[25],gender[30];
    printf("Enter Name : ");
    scanf("%s",&name);
    printf("Enter Gender : ");
    scanf("%s",&gender);
    printf("Enter Age : ");
    scanf("%d",&age);
    if (age<18)
    {   
        /*printf("%s",name);
        //printf(" is %s",gender);
        //printf(" and %s",name);
        //printf(" age is %d",age);
        //printf("")*/
        printf("%s",name);
        printf(" is not eligible for casting Vote\n");
    }
    else if(age>=18){
        printf("%s",name);
        printf(" is eligible for casting Vote\n");
    }
    return 0;
}