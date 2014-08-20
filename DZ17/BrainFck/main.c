#include <stdio.h>
#include <stdlib.h>

//Еще не до конца сделала. Закончу, когда будет время :)
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
        case ',':
            scanf ("%c", &stack[top]);
            break;
        case '.':
            printf ("%c", stack[top]);
            break;
        case '[':
            if (stack[top]!=0)
                while (stack[top]!=']')
                    top++;
            ++top;
            break;
        case ']':
            if (stack[top]!=0)
                while (stack[top]!='[')
                    top--;
            else
                ++top;
            break;
        }
    }
    while (string!=10);
    return 0;
}
