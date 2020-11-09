#include<stdio.h>
int main ()
{
    int i, j, Players, Matches, Total;
    while(scanf("%d%d", &Players, &Matches)==2)
    {
        int ScoreBoard[Players][Matches+1];
        Total=0;
        for(i=0; i<Players; i++)
        {
            ScoreBoard[i][Matches]=1;
            for(j=0; j<Matches; j++)
            {
                scanf("%d", &ScoreBoard[i][j]);
                if(ScoreBoard[i][j]==0)
                    ScoreBoard[i][Matches]=0;
            }
        }
        for(i=0; i<Players; i++)
            Total=Total+ScoreBoard[i][Matches];
        printf("%d\n", Total);
    }
    return 0;
}
