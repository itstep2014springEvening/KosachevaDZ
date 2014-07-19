#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kub(int s);
int main()
{
    int a, b, c, d;
    printf("Start!\n");
    srand(time(NULL));
    a=rand()%6+1;
    printf("\nYour number is %d\n", a);
    kub (a);
    b=rand()%6+1;
    printf("\nYour number is %d\n", b);
    kub (b);
    c=rand()%6+1;
    printf("\nMy number is %d\n", c);
    kub (c);
    d=rand()%6+1;
    printf("\nYour number is %d\n", d);
    kub (d);
    if (a+b>d+c)
    {
        printf("\nYou are WINNER!");
    }
    else
    {
        if (a+b==d+c)
        {
            printf("\nTIE!O.O");
        }
        printf("\nYou are LOSER!");
    }
    return 0;
}

int kub(int s)
{
for (int a=0; a<5; ++a)
    {
        printf ("#");
    };
    switch (s)
    {
    case 1:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            if (n==1)
            {
                printf (" ");
                printf ("*");
                printf (" ");
            }
            else
            {
                for (int b=0; b<3; ++b)
                {
                    printf (" ");
                };
            };
            printf ("#");
        };
        break;
    case 2:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf (" ");
                printf (" ");
                printf ("*");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf (" ");
                break;
            case 1:
                printf (" ");
                printf (" ");
                printf (" ");
                break;
            };
            printf ("#");
        };
        break;
    case 3:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf (" ");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf ("*");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf (" ");
                break;
            };
            printf ("#");
        };
        break;
    case 4:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf (" ");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
        case 5:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf (" ");
                printf ("*");
                printf (" ");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
        case 6:
        for (int n=0; n<3; ++n)
        {
            printf ("\n");
            printf ("#");
            switch (n)
            {
            case 0:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 1:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            case 2:
                printf ("*");
                printf (" ");
                printf ("*");
                break;
            };
            printf ("#");
        };
        break;
    };
    printf ("\n");
    for (int a=0; a<5; ++a)
    {
        printf ("#");
    };
}
