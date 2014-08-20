#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

int main()
{
    int a[N], size, first=0;
    printf ("Enter size\n");
    scanf ("%d", &size);
    input (a, size);
    int last=size-1;
    sort (a, first, last);
    output (a, size);
    return 0;
}
