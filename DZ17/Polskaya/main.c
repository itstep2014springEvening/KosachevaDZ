#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=256;
    int a=0, b=0, top=-1;
    char string;
    double stack[N];
    printf ("Enter the string:\n");
    do
    {
        scanf ("%c", &string);
        if (string>='0' && string<='9')
            stack[++top]=(double)(string-'0');
        else
        {
            switch (string)
            {
            case '-':
                b=stack[top--];
                a=stack[top--];
                stack[++top]=a-b;
                break;
            case '+':
                b=stack[top--];
                a=stack[top--];
                stack[++top]=a+b;
                break;
            case '*':
                b=stack[top--];
                a=stack[top--];
                stack[++top]=a*b;
                break;
            case '/':
                b=stack[top--];
                a=stack[top--];
                stack[++top]=a/b;
                break;
            case '=':
                break;
            }
        }
    }
    while (string!='=');
    printf("%f\n", stack[top]);
    return 0;
}
