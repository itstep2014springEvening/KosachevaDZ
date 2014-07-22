#include <stdio.h>
#include <stdlib.h>

int perevod (int a, int n);

int main()
{
    int a, n;
    printf ("Vvedite chislo ");
    scanf ("%d", &a);
    printf ("Vvedite sistemu schisleniya  ");
    scanf ("%d", &n);
    printf ("%d", perevod (a, n));
    return 0;
}

int perevod (int a, int n)
{
    int c, b=0;
    while (a>0)
    {
        b*=10;
        c=a%n;
        b+=c;
        a/=n;
    }
    a=0;
    while (b>0)
    {
        a*=10;
        a+=b%10;
        b/=10;
    }
    return a;
}

