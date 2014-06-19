#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=0; i<128; ++i)
    {
        printf ("%3d - ", i);
        switch (i)
        {

        case 8:
            printf ("\\bs");
            break;
        case 9:
            printf ("\\tab");
            break;
        case 10:
            printf ("\\n");
            break;
        case 13:
            printf ("\\cr");
            break;

        default:
            printf ("%2c ", i);
        }
        if(7==i%8)
        {
            printf("\n");
        }

    }
    return 0;
}
