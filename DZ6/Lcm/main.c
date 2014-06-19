#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, lcm;
    printf("Vvedite chislo a ");
    scanf ("%d", &a);
    printf("Vvedite chislo b ");
    scanf ("%d", &b);
    lcm=a*b;
    while (a!=b)
    {
        (a>b?(a-=b):(b-=a));
    }
    if (a=b)
    {
        lcm=lcm/a;
    }
    printf ("LCM=%d", lcm);
    return 0;
}
