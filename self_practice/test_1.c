#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int x;
        scanf("%ld", &x);
        int count=0, j;
        for (int i = 1; i <= x; i++)
        {
            for (j = 1; i <= sqrt(x); j++)
            {
                if (j==sqrt(i))
                {
                    count++;
                }
                else if (j==cbrt(i) && j!=sqrt(i))
                {
                    count++;
                }
            }
        }
        printf("%d",count);
    }
}