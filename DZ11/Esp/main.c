#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    double e, eps=0.001, a;
    printf("Vvedite x ");
    scanf ("%d", &x);
    a=x-2;
    x+=2;
    for (a; a<=x; a+=0.1)
    {
        printf ("X=%.1f ", a);
        int i=1;
        double sum=1.0, dobavka=1.0;
        while(dobavka<-eps || dobavka>eps)
        {
            dobavka*=a/i;
            sum+=dobavka;
            ++i;
        };
        printf("E=%.3f ", sum);
        e=exp(a);
        printf("mathE=%.3f ", e);
        printf("raznica=%f\n", e-sum);
    };
    return 0;
}
