#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S=1000, a, b=3, S1=1000;
    double V=1000;
    for (a=3; V<=S1 || b>=0; a+=3)
    {
        printf ("Mesyac %d:\n", a);
        S1=S+60;
        printf ("Sasha: %d\n", S1);
        V=V+(V*4/100);
        printf ("Vasya: %f\n", V);
        if (V>S1)
        {
            --b;
        };
    };
    return 0;
}
