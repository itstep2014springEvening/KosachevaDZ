#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=1000;
    int top=0, i=-1, memory[N];
    char string, stack[N];
    printf ("Enter the command:\n");
    do
    {
        scanf ("%c", &string);
        switch (string)
        {
        case '-':
            stack[top]--;
            break;
        case '+':
            stack[top]++;
            break;
        case '<':
            --top;
            break;
        case '>':
            ++top;
            break;
        case ',':
            scanf ("%c", &stack[top]);
            break;
        case '.':
            printf ("%c", stack[top]);
            break;
        case '[':
            if (stack[top]==0)
                while (stack[top]!=']')
                    top++;
            else
            {
                memory[i]=top;
                ++i
            break;
        case ']':
            if (stack[top]!=0)
                top=memory[i-1];
            break;
        }
        ++top;
    }
    while (string!=10);
    return 0;
}
