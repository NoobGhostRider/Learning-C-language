#include <stdio.h>
int main()
{
    int leap;
    printf("Enter the Year : ");
    scanf("%d", &leap);
    if (((leap % 4 == 0)&&(leap%100!=0))||(leap%400==0))
    {
        printf("This is leap year %d\n", leap);
    }
    else
    {
        printf("This Not Leap Year\n");
    }
    return 0;
}