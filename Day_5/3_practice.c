#include<stdio.h>
int main(){
    int number,table;
    int i=1;
    printf("Enter the Number For Table : ");
    scanf("%d",&number);
    while (i<=10)
    {
        table=i*number;
        printf("%d X %d = %d\n",number,i,table);
        i++;
    }
    return 0;
}