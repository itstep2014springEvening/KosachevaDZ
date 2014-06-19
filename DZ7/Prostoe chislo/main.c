#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a=2, b;
    printf("Vvedite chislo ");
    scanf ("%d", &n);
    while (b!=0)
    {
        b=n%a;
        if (b!=0)
        {
            ++a;
        };
    };
    if (a==n)
    {
        printf ("Chislo prostoe");
    }
    else
    {
        printf ("Chislo sostavnoe");
    };
    return 0;
}
