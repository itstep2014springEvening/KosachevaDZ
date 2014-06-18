#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    while (a!=0)
    {
        printf("Vvedite chislo ");
        scanf ("%d", &a);
        switch (a)
        {
        case 1:
            printf ("How are u, user?\n");
            break;
        case 2:
            printf ("Bye-bye, user.\n");
            break;
        default:
            if (a!=0)
            {
                printf ("What?\n");
            };
            break;
        };
    };
    return 0;
}
