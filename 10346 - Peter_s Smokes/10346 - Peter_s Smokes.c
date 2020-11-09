#include<stdio.h>
int main ()
{
    int C, N, Total;
    while(scanf("%d%d", &C, &N)!=EOF)
    {
        Total=C;
        while(C>N)
        {
            Total=Total+(C/N);
            C=(C/N)+(C%N);
        }
        printf("%d\n", Total);

    }
    return 0;
}
