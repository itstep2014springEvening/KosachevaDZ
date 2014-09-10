#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=100;
    int memory[N], x=0, i=0, instruction=0, accumulate=0, operation, bias=0;
    printf ("Enter the command:\n");
    while (x!=-99999)
    {
        printf ("%02d ", i);
        scanf ("%d", &x);
        memory[i]=x;
        ++i;
    }
    do
    {
        operation=memory[instruction]/100;
        if (operation<0)
            operation=-operation;
        int way=memory[instruction]%100;
        switch (operation)
        {
        case 10:
            scanf ("%d", &memory[way+bias]);
            instruction++;
            break;
        case 11:
            printf ("%+05d\n", memory[way+bias]);
            instruction++;
            break;
        case 20:
            accumulate=memory[way+bias];
            instruction++;
            break;
        case 21:
            memory[top+bias]=accumulate;
            instruction++;
            break;
        case 22:
            accumulate=top;
            break;
        case 23:
            top=accumulate;
            break;
        case 24:
            accumulate=bias;
            break;
        case 25:
            bias=accumulate;
            break;
        case 26:
            memory[--top]=accumulate;
            break;
        case 27:
            accumulate=memory[top++];
            break;
        case 30:
            accumulate+=memory[way+bias];
            instruction++;
            break;
        case 31:
            accumulate-=memory[way+bias];
            instruction++;
            break;
        case 32:
            accumulate/=memory[way+bias];
            instruction++;
            break;
        case 33:
            accumulate*=memory[way+bias];
            instruction++;
            break;
        case 34:
            accumulate=way;
            break;
        case 40:
            instruction=way;
            break;
        case 41:
            if (accumulate<0)
                instruction=way;
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
            printf ("End.\n");
            break;
        case 44:
            memory[--top]=instruction;
            instruction=way;
            break;
        case 45:
            instruction=memory[top++]+1;
            if (way<=0)
                way=-way;
            for (int a=0; a<way; ++a)
                ++top;
            break;
        }
    }
    while (operation!=43);
    return 0;
}
