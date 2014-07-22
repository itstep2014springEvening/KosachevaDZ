#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main()
{
    int a[1000], size, n;
    printf ("Enter size of array\n");
    scanf ("%d", &size);
    input (a, size);
    output (a, size);
    printf ("\nEnter element: ");
    scanf ("%d", &n);
    searchelement (a, size, n);
    return 0;
}
