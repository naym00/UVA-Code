#include<stdio.h>

struct NewType
{
    char URL[105];
    int Relevance;
};
int main ()
{
    struct NewType Object[10];
    int TestCase, i, j, BiggestOne;
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        for(j=0; j<10; j++)
            scanf("%s%d", Object[j].URL, &Object[j].Relevance);
        for(j=0, BiggestOne=-1; j<10; j++)
        {
            if(BiggestOne<Object[j].Relevance)
                BiggestOne=Object[j].Relevance;
        }
        printf("Case #%d:\n", i);
        for(j=0; j<10; j++)
        {
            if(BiggestOne==Object[j].Relevance)
                printf("%s\n", Object[j].URL);
        }
    }
    return 0;
}
