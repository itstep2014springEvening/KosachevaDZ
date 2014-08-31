#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=100;
    int x=0, memory[N], instruction=0, accumulate=0, top, operation;
    printf ("Enter the command:\n");
    while (x!=-99999)
    {
        printf ("%02d ", instruction);
        scanf ("%d", &x);
        memory[instruction]=x;
        ++instruction;
    }
    instruction=0;
    do
    {
        operation=memory[instruction]/100;
        top=memory[instruction]%100;
        switch (operation)
        {
        case 10:
            scanf ("%d", &memory[top]);
            instruction++;
            break;
        case 11:
            printf ("%+05d\n", memory[top]);
            instruction++;
            break;
        case 20:
            accumulate=memory[top];
            instruction++;
            break;
        case 21:
            memory[top]=accumulate;
            instruction++;
            break;
        case 30:
            accumulate+=memory[top];
            instruction++;
            break;
        case 31:
            accumulate-=memory[top];
            instruction++;
            break;
        case 32:
            accumulate/=memory[top];
            instruction++;
            break;
        case 33:
            accumulate*=memory[top];
            instruction++;
            break;
        case 40:
            instruction=top;
            break;
        case 41:
            if (accumulate<0)
                instruction=top;
            else
                instruction++;
            break;
        case 42:
            if (accumulate==0)
                instruction=top;
            else
                instruction++;
            break;
        case 43:
            printf("End.\n");
            break;
        }
    }
    while (operation!=43);
    return 0;
}
