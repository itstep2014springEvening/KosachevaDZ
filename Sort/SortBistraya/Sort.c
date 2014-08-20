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
    printf("\n");
}

void change (int a[], int index, int nextindex)
{
    int temp=a[nextindex];
    a[nextindex]=a[index];
    a[index]=temp;
}

void sort (int a[], int first, int last)
{
    int start=first, end=last, med=a[(last+first)/2];
    do
    {
        while (a[start]<med)
            ++start;
        while (a[end]>med)
            --end;
        if (start<=end)
        {
            change (a, start, end);
            ++start;
            --end;
        }
    }
    while (start<=end);
    if (start<last)
        sort (a, start, last);
    if (first<end)
        sort (a, first, end);
}
