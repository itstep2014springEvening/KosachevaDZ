#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    while (c<100)
    {
        printf ("Ur sum of number is <100\n");
        printf ("Enter the number ");
        scanf ("%d", &a);
        if (a<100)
        {
            printf ("Ur sum of number is <100\n");
            printf ("Enter the number ");
            scanf ("%d", &b);
        };
        c=a+b;
    };
    printf ("Ur sum of number is >=100");
    return 0;
}
