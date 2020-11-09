#include<stdio.h>
int main ()
{
    int i, TestCase, A, B, Dollar;
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        scanf("%d%d%d", &A, &B, &Dollar);
        printf("%d\n", ((2*A-B)*Dollar)/(A+B));
    }
    return 0;
}
