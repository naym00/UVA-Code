#include<stdio.h>
struct threeInteger
{
    int First;
    int Second;
    int Third;
};
int main ()
{
    int i, j, TestCase, Fermers, Result;
    scanf("%d", &TestCase);
    for(i=1, Result=0; i<=TestCase; i++, Result=0)
    {
        scanf("%d", &Fermers);
        struct threeInteger Object[Fermers];
        for(j=0; j<Fermers; j++)
            scanf("%d%d%d", &Object[j].First, &Object[j].Second, &Object[j].Third);
        for(j=0; j<Fermers; j++)
            Result=Result+Object[j].First*Object[j].Third;
        printf("%d\n", Result);
    }

    return 0;
}
