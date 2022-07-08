#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char c[100];
    int d;
    for (int i = 0; i <t; i++)
    {
        scanf("%s",&c);
        d = strlen(c);
        if ((d % 2) != 0)
        {
            printf("NO\n");
        }
        else
        {
            int i = 0;
            int j;
            for (int i = 0,j=(d/2); i<d/2,j<d; i++, j++)
            {
                if (c[i] != c[j])
                {
                    printf("NO\n");
                    break;
                }
                else
                {
                    printf("YES\n");
                    break;
                }
            }
        }
    }
}
