#include<stdio.h>
int main ()
{
    int i, j, TestCase, NumberOfCalls, Seconds, Mile, Juice;
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase && scanf("%d", &NumberOfCalls); i++)
    {
        for(j=0, Mile=0, Juice=0; j<NumberOfCalls; j++)
        {
            scanf("%d", &Seconds);
            Mile+=((Seconds/30)+1)*10;
            Juice+=((Seconds/60)+1)*15;
        }
        if(Mile<Juice)
            printf("Case %d: Mile %d\n", i, Mile);
        else if(Mile>Juice)
            printf("Case %d: Juice %d\n", i, Juice);
        else
            printf("Case %d: Mile Juice %d\n", i, Mile);
    }
    return 0;
}
