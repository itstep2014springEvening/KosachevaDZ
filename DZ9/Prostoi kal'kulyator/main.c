#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char c;
    scanf ("%d", &a);
    scanf ("%s", &c);
    scanf ("%d", &b);
    switch (c)
    {
    case '+':
        a+=b;
        printf ("=%d", a);
        break;
    case '-':
        a-=b;
        printf ("=%d", a);
        break;
    case '*':
        a*=b;
        printf ("=%d", a);
        break;
    case '/':
        a/=b;
        printf ("=%d", a);
        break;
    default:
        printf ("Ukajite operaciu.");
    };
    return 0;
}
