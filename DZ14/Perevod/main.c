#include <stdio.h>
#include <stdlib.h>

int perevod (int a, int n);
int perevorot (int b);

int main()
{
    int a, n;
    printf ("Vvedite chislo ");
    scanf ("%d", &a);
    printf ("Vvedite sistemu schisleniya  ");
    scanf ("%d", &n);
    int b=perevod (a, n);
    printf ("%d ", b);
    printf ("%d", perevorot (b));
    return 0;
}

int perevod (int a, int n)
{
    int c, b=0;
    while (a>0)
    {
        if (a%n==0)
        {
            b*=10;
            c=0;
            b+=c;
        }
        else
        {
            b*=10;
            c=a%n;
            b+=c;
        }
        a/=n;
    }
    return b;
}

int perevorot (int b)
{
    int a=0;
    while (b>0)
    {
        a*=10;
        a+=b%10;
        b/=10;
    }
    return a;
}
