#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vvedite chislo yarusov ");
    scanf ("%d", &n);
    n*=2;
    for (int i=1; i<=n; ++i)
    {
        for (int a=1; a<=i && i%2!=0; a+=2)
        {
            for (int b=(n-a)/2; b>0; --b)
            {
                printf (" ");
            };
            for (int c=a; c>0; --c)
            {
                if (c==a || c==1 || a==i)
                {
                    printf ("*");
                }
                else
                {
                    printf (" ");
                };
            };
            printf ("\n");
        };
    };
    for (int b=0; b<2; ++b)
    {
        for (int a=n/2-3; a>=0; --a)
        {
            printf (" ");
        };
        printf ("* *\n");
    };
    return 0;
}
