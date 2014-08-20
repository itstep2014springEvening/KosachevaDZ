#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=10000;
    int top=0;
    char string, stack[N];
    printf ("Enter the command:\n");
    do
    {
        scanf ("%c", &string);
        switch (string)
        {
        case '-':
            --stack[top];
            break;
        case '+':
            ++stack[top];
            break;
        case '<':
            --top;
            break;
        case '>':
            ++top;
            break;
        case '.':
            printf("%c\n", stack[top]);
            break;
        }
    }
    while (string!=';');
    return 0;
}
