#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, h;
    double V, S, l, P;
    P=3.1415926535897932384626433832795;
    printf ("Vvedite radius\n");
    scanf ("%d", &r);
    printf ("Vvedite visotu\n");
    scanf ("%d", &h);
    if (r>0, h>0)
    {
        V=P*r*r*h/3;
        l=sqrt((h*h)+(r*r));
        S=P*r*(l+r);
        printf ("V = %f\nS = %f\n", V, S);
    }
    return 0;
}
