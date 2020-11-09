#include<stdio.h>
int main ()
{
    int i, TestCase, a, b;
    scanf("%d", &TestCase);
    for(i=1; i<=TestCase; i++)
    {
        scanf("%d%d", &a, &b);
        if(a&1&&b&1)
            printf("Case %d: %d\n", i, ((a+b)*(b-a+2))/4);
        else if(!(a&1)&&b&1)
            printf("Case %d: %d\n", i, ((a+b+1)*(b-a+1))/4);
        else if(a&1&&!(b&1))
            printf("Case %d: %d\n", i, ((a+b-1)*(b-a+1))/4);
        else
            printf("Case %d: %d\n", i, ((a+b)*(b-a))/4);
    }
    return 0;
}
