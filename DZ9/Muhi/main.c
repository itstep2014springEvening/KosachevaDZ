#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, f, a=0, b;
    double e;
    printf ("Vvedite chislo muh ");
    scanf ("%d", &n);
    printf ("Vvedite chislo izgonyaemih muh ");
    scanf ("%lf", &e);
    printf ("Vvedite chislo minut, cherez kotoroe IV ustaet ");
    scanf ("%d", &t);
    printf ("Vvedite chislo muh, zaletaushih obratno ");
    scanf ("%d", &f);
    if ((e==f && t>0) || (e<f))
    {
        printf ("Nevozmojno");
    }
    else
    {
        b=n;
        for (a; b>0; ++a)
        {
            if (a%t==0 && a!=0)
            {
                e=e-(e*20/100);
            };
            b=b-e+f;
        };
        printf ("IV izgonit vseh muh cherez %d min", a);
    };
    return 0;
}
