#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n, a=2;
    printf("Vvedite chislo ");
    scanf("%d",&n);
    while(a<=n)
    {
        if(n%a==0)
        {
            printf("%d ", a);
            n/=a;
        }
        else
        {
            ++a;
        };
    };
    return 0;
}
