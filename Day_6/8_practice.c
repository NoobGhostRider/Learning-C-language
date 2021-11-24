//Wap to take a no. From the user and check whether it is armstrong or not.
#include<math.h>
#include<stdio.h>
int main(){
    int num,r,sqr,j=0,n,p;
    printf("Enter the No. : ");
    scanf("%d",&num);
    n=num;
    printf("How many type of digit you entered : ");//I have added this as a temparory i will change it letter :)
    scanf("%d",&p);
    while (num>0)
    {
        r=num%10;
        sqr=pow(r,p);
        j+=sqr;
        num/=10;
    }
    if (n==j)
    {
        printf("It is armstrong no.\n");
    }
    else{
        printf("It is not armstrong no. \n");
    }
    return 0;
}