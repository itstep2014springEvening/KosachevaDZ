void input (int a[], int size)
{
    for (int i=0; i<size; ++i)
    {
        a[i]=rand();
    }
}

void output (int a[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", a[i]);
    }
}

int max (int a[], int size)
{
    int max=0;
    for (int i=0; i<size; ++i)
    {
        if (max<a[i] || i==0)
            max=a[i];
    }
    return max;
}

int min (int a[], int size)
{
    int min=0;
    for (int i=0; i<size; ++i)
    {
        if (a[i]<min || i==0)
            min=a[i];
    }
    return min;
}
