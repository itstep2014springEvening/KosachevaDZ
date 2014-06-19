#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, p;
    printf ("Vvedite x ");
    scanf ("%d",&x);
    printf ("Vvedite p ");
    scanf ("%d",&p);
    for (int a=1; p>0; a*=x)
    {
        p-=1;
    }
    printf ("%d", a);
    return 0;
}
