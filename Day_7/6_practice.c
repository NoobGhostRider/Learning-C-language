//WAP TO GENERATE A RANDOM NUMBER ON EVERY RUN 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a;
    srand(time(0));
    a=rand(); 
    printf("The Random No. is : %d\n",a);
    return 0;
}