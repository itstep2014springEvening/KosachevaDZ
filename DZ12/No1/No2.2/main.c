#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Vvedite chislo ");
    scanf ("%d", &a);
    do
    {
        --a;
        printf ("%d ", a);
    }
    while (a!=0);
    return 0;
}
