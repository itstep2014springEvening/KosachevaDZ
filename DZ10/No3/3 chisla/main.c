#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Vvedite 3 chisla\n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    printf ("%d + %d + %d = %d\n", a, b, c, a+b+c);
    printf ("%d - %d - %d = %d\n", a, b, c, a-b-c);
    printf ("%d * %d * %d = %d\n", a, b, c, a*b*c);
    if (a!=0 && b!=0)
    {
        printf ("%d / %d / %d = %d\n", a, b, c, a/b/c);
        printf ("%d %% %d %% %d = %d\n", a, b, c, a%b%c);
    }
    else
    {
        printf ("Na 0 delit' nel'zya");
    };
    return 0;
}
