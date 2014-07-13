#include <stdio.h>
#include <stdlib.h>

int lcm(int a,int b);
int gcd(int a,int b);

int main()
{
    int a, b, GCD, LCM;
    printf ("Vvedite chislo a ");
    scanf ("%d", &a);
    printf ("Vvedite chislo b ");
    scanf ("%d", &b);
    LCM = lcm(a,b);
    GCD = gcd(a,b);
    printf ("GCD=%d\nLCM=%d", GCD, LCM);
    return 0;
}

int lcm (int a, int b)
{
    int lcm=a*b;
    while (a!=b)
    {
        (a>b?(a-=b):(b-=a));
    };
    return lcm=lcm/a;
}

int gcd (int a, int b)
{
    while (a>0 && b>0)
    {
        (a>b? (a%=b):(b%=a));
    };
    return a+b;
}
