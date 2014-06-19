#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, a, b;
    a=1;
    b=0;
    printf ("Vvedite n \n");
    scanf ("%d", &n);
    while (n>0)
    {
        printf ("%d ", a);
        b+=a;
        --n;
        if (n>0)
        {
            printf ("%d ", b);
            a+=b;
            --n;
        }
    }
    return 0;
}
