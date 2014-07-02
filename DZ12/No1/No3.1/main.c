#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf ("Vvedite chislo ");
    scanf ("%d", &a);
    printf ("Vvedite delitel' ");
    scanf ("%d", &b);
    while (a%b==0)
    {
        a=a/b;
        printf ("%d ", a);
    };
    printf ("Finish.");
    return 0;
}
