#include <stdio.h>
#include <stdlib.h>
int main()
{
    int h, w, a, b=1, c=1, d;
    printf("Vvedite h ");
    scanf ("%d", &h);
    printf("Vvedite w ");
    scanf ("%d", &w);
    for(b; b<h; ++b)
    {
        a=1;
        d=2;
        for (a; a<=w; ++a)
        {
            printf ("#");
            for (c; c<b; ++c)
            {
                for (d; d<w; ++d)
                {
                    printf (" ");
                    ++a;
                };
            };
        };
        printf ("\n");
    };
    a=1;
    if (b=h)
    {
        for (a; a<=w; ++a)
        {
            printf ("#");
        }
    };
    return 0;
}
