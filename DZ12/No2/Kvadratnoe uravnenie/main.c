#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, D, x1, x2;
    printf ("Vvedite a ");
    scanf ("%lf", &a);
    while (a==0)
    {
        printf ("Vvedite a (ne 0) ");
        scanf ("%lf", &a);
    };
    printf ("Vvedite b ");
    scanf ("%lf", &b);
    printf ("Vvedite c ");
    scanf ("%lf", &c);
    D=b*b-(4*a*c);
    printf ("D=%f\n", D);
    if (D<0)
    {
        printf ("Kornei net.");
    }
    else
    {
        D=sqrt(D);
        x1=(-b+D)/(2*a);
        x2=(-b-D)/(2*a);
    };
    printf ("Korni uravneniya: %f %f", x1, x2);
    return 0;
}
