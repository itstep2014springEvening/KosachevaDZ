#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

int main()
{
    int a[N], size;
    printf ("Enter size\n");
    scanf ("%d", &size);
    input (a, size);
    sort (a, size);
    output (a, size);
    return 0;
}
