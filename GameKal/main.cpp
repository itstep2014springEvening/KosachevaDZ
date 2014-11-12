#include <stdlib.h>
#include <cstdio>

void createNewBoard(int *board);
void game(int *board);
void printBoard(int *board);
int check(int *board);

int main()
{
    int board[14];
    createNewBoard(board);
    game(board);
    return 0;
}

void createNewBoard(int *board)
{
    for(int i=0; i<14; ++i)
        board[i]=6;
    board[6]=0;
    board[13]=0;
}

void game(int *board)
{
    int player=3;
    int checkIt=0;
    do
    {
        system("clear");
        printBoard(&*board);
        int choice=0;
        do
        {
            do
            {
                if(player%2==1)
                    printf("First ");
                else
                    printf("Second ");
                printf("player, choose your cell!\n");
                scanf("%d", &choice);
            }
            while(choice<0 || choice>6);

            if(player%2==1)
                --choice;
            else
                choice+=6;
        }
        while(board[choice]==0);
        int temp=board[choice];
        board[choice]=0;
        for(temp+1; temp>0; --temp)
        {
            ++choice;
            if(choice>13)
                choice=0;
            board[choice]+=1;
            if(temp==1)
            {
                if(choice==6 && player%2==0)
                {
                    board[choice]-=1;
                    board[choice+1]+=1;
                }
                if(choice==13 && player%2==1)
                {
                    board[0]+=1;
                    board[choice]-=1;
                }
                if((choice==6 && player%2==1) || (choice==13 && player%2==0))
                    ++player;
                if(board[choice]==1 && choice!=6 && choice!=13)
                {
                    int ifNull=0;
                    if(choice<6)
                    {
                        ifNull=6-choice;
                        ifNull+=6;
                    }
                    else
                    {
                        ifNull=choice-6;
                        ifNull=6-ifNull;
                    }
                    if(board[ifNull]!=0)
                    {
                        if(player%2==1)
                            board[6]+=1+board[ifNull];
                        else
                            board[13]+=1+board[ifNull];

                        board[ifNull]=0;
                        board[choice]=0;
                    }
                }
            }
        }
        ++player;
        checkIt=check(&*board);
    }
    while(checkIt==0);
    printf("First player = %d.\nSecond player = %d.\n", board[6], board[13]);
    if(checkIt==1)
        printf("First player is winner!\n");
    if(checkIt==2)
        printf("Second player is winner!\n");
    if(checkIt==3)
        printf("Draw!\n");
}

void printBoard(int *board)
{
    printf("    ");
    for(int j=6; j>0; --j)
        printf("%4d", j);
    printf("\n");
    for(int i=0; i<33; ++i)
        printf("#");
    printf("\n#   ");
    for(int j=5; j>=0; --j)
    {
        printf("#");
        printf("%3d", board[j]);
    }
    printf("#   #\n#%3d", board[6]);
    for(int i=0; i<25; ++i)
        printf("#");
    printf("%3d#\n#   ", board[13]);
    for(int j=7; j<13; ++j)
    {
        printf("#");
        printf("%3d", board[j]);
    }
    printf("#   #\n");
    for(int i=0; i<33; ++i)
        printf("#");
    printf("\n    ");
    for(int j=1; j<7; ++j)
        printf("%4d", j);
    printf("\n");
}

int check(int *board)
{
    if(board[6]>36)
        return 1;
    if(board[13]>36)
        return 2;
    if(board[13]==36 && board[13]==board[6])
        return 3;
    int temp1=0, temp2=0;
    for(int i=0; i<6; ++i)
        temp1+=board[i];
    for(int i=7; i<13; ++i)
        temp2+=board[i];
    if(temp1==0)
    {
        board[13]+=temp2;
        return 2;
    }
    if(temp2==0)
    {
        board[6]+=temp1;
        return 1;
    }
    return 0;
}
