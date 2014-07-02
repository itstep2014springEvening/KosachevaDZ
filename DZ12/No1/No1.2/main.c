#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=64;
    do
    {
        a/=2;
        printf ("%d ", a);
    }
    while (a!=0);
    return 0;
}
