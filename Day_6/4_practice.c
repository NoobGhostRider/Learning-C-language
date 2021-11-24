//4. WAP to calculate the sum of the number occuring in the table of 8.(consider 8x1 to 8x15 ).

#include<stdio.h>
int main(){
    int n=8,i=1,table,sum=0;
    for (int j= 1; j < 15; j++)
    {
        table=n*i;
        sum+=table;
        i++;
    }
    printf("The Sum of number occuring in table of 8  : %d\n",sum);
    return 0;
}