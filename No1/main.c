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
    printf ("%d / %d = %d\n", a, b, a/b);
    printf ("%d %% %d = %d\n", a, b, a%b);
    return 0;
}
