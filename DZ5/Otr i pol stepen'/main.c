#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p, a=1;
    printf ("Vvedite x ");
    scanf ("%d",&x);
    printf ("Vvedite p ");
    scanf ("%d",&p);
    if (p>=0)
    {
        for (a; p>0; a*=x)
        {
            --p;
        }
        printf ("%d", a);
    }
    else
    {
        for (a; p<0; a*=x)
        {
            ++p;
        }
        printf ("%d", 1/a);
    };
    return 0;
}
