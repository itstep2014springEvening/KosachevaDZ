#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf ("Vvedite pervoe chislo ");
    scanf ("%d", &a);
    printf ("Vvedite vtoroe chislo ");
    scanf ("%d", &b);
    printf ("%d + %d = %d\n", a, b, a+b);
    printf ("%d - %d = %d\n", a, b, a-b);
    printf ("%d * %d = %d\n", a, b, a*b);
    if (b!=0)
    {
        printf ("%d / %d = %d\n", a, b, a/b);
        printf ("%d %% %d = %d\n", a, b, a%b);
    }
    else
    {
        printf ("Nel'zya delit' na 0");
    };
    return 0;
}
