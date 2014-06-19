#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a=1, b, c;
    printf("Vvedite chislo ");
    scanf ("%d", &n);
    for (a; a<n; a+=2)
    {
        c=a;
        b=(n-a)/2;
        for (b; b>0; --b)
        {
            printf (" ");
        };
        for (c; c>0; --c)
        {
            printf ("#");
        };
        printf ("\n");
    };
    for (a; a>=0; a-=2)
    {
        c=a;
        b=(n-a)/2;
        for (b; b>0; --b)
        {
            printf (" ");
        };
        for (c; c>0; --c)
        {
            printf ("#");
        };
        printf ("\n");
    };
    return 0;
}

