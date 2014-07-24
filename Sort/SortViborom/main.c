#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main()
{
    int a[N], size;
    printf ("Enter size\n");
    scanf ("%d", &size);
    input (a, size);
    for (int i=0; i<size; ++i)
    {
        int index=max(a, size-i);
        change (a, size-i-1, index);
    }
    output (a, size);
    return 0;
}
