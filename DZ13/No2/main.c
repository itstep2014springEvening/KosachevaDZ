#include <stdio.h>
#include <stdlib.h>

double polojpow(double x,int n);
double otricpow(double x,int n);

int main()
{
    int n;
    double x;
    printf ("Vvedite chislo ");
    scanf ("%lf", &x);
    printf ("Vvedite stepen' ");
    scanf ("%d", &n);
    if (n>=0)
    {
        printf ("Otvet: %f", polojpow(x,n));
    }
    else
    {
        printf ("Otvet: %f", otricpow(x,n));
    };
    printf (" %f", pow(x, n));
    return 0;
}

double polojpow(double x,int n)
{
    double a=1.0;
    for (n; n>0; --n)
    {
        a*=x;
    };
    return a;
}

double otricpow(double x,int n)
{
    double a=1.0;
    for (n; n<0; ++n)
    {
        a*=x;
    };
    return 1/a;
}
