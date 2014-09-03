#include <stdio.h>
#include <stdlib.h>
#include "Crestiki.h"

int main()
{
    int i=4, x=4, y=4;
    int field[4][4][4]= {0};
    printf ("Let's play!\n");
    outputField (field, i, x, y);
    return 0;
}
