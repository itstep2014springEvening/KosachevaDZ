#include <stdio.h>
#include <stdlib.h>

int wiki ();
int random ();

int main()
{
    int i=0;
    printf ("Wiki random is:\n");
    for (i; i<10; ++i)
        printf ("%d\n", wiki());
    printf ("\nMy random is:");
    for (i; i>=0; --i)
        printf ("\n%d", random());
    return 0;
}

int wiki ()
{
    long long int a=4096, c=150889, m=714025;
    static int x=63;
    x=(a*x+c)%m;
    return x;
}

int random ()
{
    long long int a=7, c=50, m=67;
    static int x=88;
    x=(a*x+c)%m;
    return x;
}
