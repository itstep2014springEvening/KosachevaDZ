void input (int a[], int size)
{
    for (int i=0; i<size ; ++i)
    {
        printf ("Enter a[%d]: ", i+1);
        scanf ("%d", &a[i]);
    }
}

int max (int a[], int size)
{
    int indexOfMax=0;
    for(int i=1; i<size; ++i)
        if(a[indexOfMax]<a[i])
            indexOfMax=i;
    return indexOfMax;
}

void change (int a[], int hin, int her)
{
    int temp=a[hin];
    a[hin]=a[her];
    a[her]=temp;
}

void output (int a[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", a[i]);
    }
    printf("\n");
}
