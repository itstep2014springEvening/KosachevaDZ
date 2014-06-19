#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L, x, p, a;
    printf ("Vvedite L ");
    scanf ("%d", &L);
    printf ("Vvedite x ");
    scanf ("%d", &x);
    p=0;
    a=x;
    while (L>=a)
    {
        a*=x;
        p+=1;
    }
    printf ("%d", p);
    return 0;
}
