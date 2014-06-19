#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=10000, b;
    for (int n=1; n<=12; ++n)
    {
        a=(a*13/100)+a;
        switch (n)
        {
        case 5:
            b=2*a*63/100;
            printf ("63%% of the sum on the fifth month:\n%f\n", b);
            break;
        case 7:
            printf ("Month %d (Vadim):\n%f\n", n, a);
            break;
        case 12:
            printf ("Month %d (Zahar):\n%f\n", n, a);
            break;
        };
    };
    return 0;
}
