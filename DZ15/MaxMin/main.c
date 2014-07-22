#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"

int main()
{
    int a[1000], size, n;
    printf ("Enter size of array\n");
    scanf ("%d", &size);
    srand (time(NULL));
    input (a, size);
    output (a, size);
    printf ("\nMax number is %d.\n", max (a, size));
    printf ("Min number is %d.", min (a, size));
    return 0;
}
