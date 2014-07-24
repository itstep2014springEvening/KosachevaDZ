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
    for (int index=0; index<size; ++index)
        {
            for (int s=index; s>0; --s)
            {
                if (a[s]<a[s-1])
                    change (a, s, s-1);
            }
        }
}

void change (int a[], int index, int lastindex)
{
    int temp=a[lastindex];
    a[lastindex]=a[index];
    a[index]=temp;
}
