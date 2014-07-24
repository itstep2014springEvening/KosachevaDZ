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

void sort (int a[], int size)
{
    for (int allelements=0; allelements<size; ++allelements)
    {
        for (int index=0; index<size; ++index)
        {
            if (a[index]>a[index+1])
            {
                change (a, index, index+1);
            }
        }
    }
}

void change (int a[], int index, int nextindex)
{
    int temp=a[nextindex];
    a[nextindex]=a[index];
    a[index]=temp;
}
