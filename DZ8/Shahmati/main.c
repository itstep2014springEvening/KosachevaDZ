#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf ("Vvedite chislo m ");
    scanf ("%d", &m);
    printf ("Vvedite chislo n ");
    scanf ("%d", &n);
    for (int a=0; n>a; ++a)
    {
        for (int b=1; m>=b; b+=2)
        {
            if (a%2==0)
            {
                printf ("*");
                if (m>b)
                {
                    printf (" ");
                };
            }
            else
            {
                printf (" ");
                if (m>b)
                {
                    printf ("*");
                };

            };
        };
        printf ("\n");
    };
    return 0;
}
