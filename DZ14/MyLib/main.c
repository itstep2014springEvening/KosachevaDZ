#include <stdio.h>
#include <stdlib.h>
#include "MyLib.h"

int main()
{
    int a, b;
    printf("Vvedite pervoe chislo\n");
    scanf ("%d", &a);
    printf("Vvedite vtoroe chislo\n");
    scanf ("%d", &b);
    printf ("LCM=%d\n", lcm(a, b));
    printf ("GCD=%d", gcd(a, b));
    return 0;
}
