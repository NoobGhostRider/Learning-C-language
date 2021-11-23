//2.Write a C program to check whether a character is an alphabet, digit or special character.

#include<stdio.h>
int main(){
    char character;
    printf("Enter The Character : ");
    scanf("%c",&character);
    if ((character>='a')&&(character<='z'))
    {
        printf("Character is an alphabet\n");
    }
    else if ((character>='A')&&(character<='Z'))
    {
        printf("Character is an alphabet\n");
    }
    else if ((character>='0')&&(character<='9'))
    {
        printf("Character is an Number\n");
    }
    else{
        printf("Character is a Special Character\n");
    }
    return 0;
}