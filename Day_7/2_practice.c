//WAP to find first and last digit of a number.
#include <stdio.h>
int main()
{
    int number, rem, i, count = 0;
    printf("Enter The Number : ");
    scanf("%d", &number);
    while (number > 0)
    {
        rem = number % 10;
        count += 1;
        number /= 10;
        if (count == 1)
        {
            i = rem;
        }
    }
    printf("first digit no. is : %d\n", rem);
    printf("last digit no. is : %d\n", i);
    return 0;
}