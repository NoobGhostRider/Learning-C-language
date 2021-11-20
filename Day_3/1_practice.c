#include<stdio.h>
int main(){
    char character;
    printf("Enter the Alphabet to check vowel or consonant : ");
    scanf("%c",&character);
    if ((character == 'a')||(character == 'A')) 
    {
        printf("An Alphabet is vowel \n");
    }
    else if((character == 'e')||(character == 'E')){
        printf("An Alphabet is vowel\n");
    }
    else if((character == 'i')||(character == 'I')){
        printf("An Alphabet is vowel\n");
    }
    else if((character == 'o')||(character == 'O')){
        printf("An Alphabet is vowel\n");
    }
    else if((character == 'u')||(character == 'U')){
        printf("An Alphabet is vowel\n");
    }
    else{
        printf("An Alphabet is consonant \n");
    }
    return 0;
}