#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], size, n;
    printf ("Enter size of array\n");
    scanf ("%d", &size);
    printf ("Enter array\n");
    for (int i=0; i<size ; ++i)
    {
        printf ("Enter a[%d]: ", i+1);
        scanf ("%d", &a[i]);
    }
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", a[i]);
    }
    printf ("\nEnter element: ");
    scanf ("%d", &n);
    for (int i=0; i<size; ++i)
    {
        if (a[i]==n)
        {
            printf ("a[%d] ", i);
        }
    }
    return 0;
}
