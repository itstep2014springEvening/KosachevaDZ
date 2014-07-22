void input (int a[], int size)
{
    for (int i=0; i<size ; ++i)
    {
        printf ("Enter a[%d]: ", i+1);
        scanf ("%d", &a[i]);
    }
}

void output (int a[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf ("%d ", a[i]);
    }
}

void searchelement (int a[], int size, int n)
{
    int proof=0;
    for (int i=0; i<size; ++i)
    {
        if (a[i]==n)
        {
            printf ("The index of %d is a[%d].\n", n, i);
            ++proof;
        }
    }
    if (proof==0)
        printf ("U don't have this number in ur array.");
}
