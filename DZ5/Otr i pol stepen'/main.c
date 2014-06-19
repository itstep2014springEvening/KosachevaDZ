#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p;
    double a;
    printf ("Vvedite x ");
    scanf ("%d",&x);
    printf ("Vvedite p ");
    scanf ("%d",&p);
    a=1;
    if (p>=0)
    {
        for (a; p>0; a*=x)
        {
            --p;
        }
        printf ("%f", a);
    }
    else
    {
        for (a; p<0; a=x*a)
        {
            ++p;
        }
        printf ("%f", 1/a);
    }
    return 0;
}
